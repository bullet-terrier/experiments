// for debugging purposes - apparently passing the file to the
// preprocessor doesn't actually do anything.
#include "DEBUG_MAIN.h"
// prints.c
//
// attempt at generating a more general use print
// using inline assembler - targeting x86-64 linux machines - might
// see what's involved in getting it to work for windows.
// will contain main if you define DEBUG_MAIN when compiling this module.

#ifndef BREAKLEN
#define BREAKLEN 64
#endif

#ifdef MANUAL_LENGTH

int manual_length(char *msg)
{
    int len = 0;
    // If I'm reading this correctly - while the value at pointer msg+length is
    // not equal to the null-byte, continue.
    while(*(msg+len)!='\0')
    {
         // I might go ahead and define a breaking mechanism to prevent infinite loops.
         len++; // increment len, and continue. we'll return len.
         if((len^BREAKLEN)==0)
         {
             break; // BREAKLEN can be arbitrarily defined in a header. we're setting it as 64 for now.
         }
    }
}

#endif

#ifndef win32

// we'll give this a shot if win32 is not defined.
// if it is, we'll need to do something else.
// I'll need to try something here to let this work under less favorable condidtions.
// maybe something along the lines of... I don't know...
// something to find the length of a value...
void prints(
    char *msg,
#ifdef MANUAL_LENGTH
    int len
#endif
)
{
    // We'll need to pass the length for each one. we'll assume that the default is 0.
    // would be a good candidate for recursion really.
    #ifndef MANUAL_LENGTH
    int len = BREAKLEN;
    #endif
    // alright - nothing inherently wrong with the call - but there was something wrong
    // with the loop - was perpetually hitting zero.
    // I'll have to revisit this a bit later, and trying to set it up with some more
    // amusing constructs later.
    for(int i = 0; i < len^BREAKLEN; i++)
    {
     #ifdef TRUE_TEST
        // basically adjusting this to try to pass more systemcalls, but allow dynamic printing.
        register int syscall asm("rax") = 1; // establish that register ax contains (1) (write)
        register int arg1    asm("rdi") = 1; // arg1 for write is the file descriptor. 1 is stdout. (I'll tinker with 3 later)
        // register char* arg2 asm("rsi") = *msg; // original attempt.
        // adjusting to extract the location of msg+offset for length.
        register char* arg2  asm("rsi") = msg+i; // pointer arg2 = message contents. try using the actual buffer now.
        register int arg3    asm("rdx") = 1; // should get the size of the data that msg points at. always write one byte.
        asm("syscall"); // on most linux kernels in 64 bit mode, this should execute "rax", might need 0x80 instead.
     #else
        // should repeat this a few times. I'll have to think of a better way to test this.
        register int syscall asm("rax") = 1; // action = write
        register int arg1    asm("rdi") = 1; // fd = stdout
        register char* arg2  asm("rsi") = "Hello\r\n"; // message, length of 7
        register int arg3    asm("rdx") = 7; // buffer length.
        asm("syscall");
     #endif
    }
    return; // void - no return value.
}

#else
#include <stdio.h>
void prints(char *msg)
{
    // I think that this will work on a windows machine - so linux would get
    // the assembly - and windows would include stdio and call printf.
    printf("{0}",msg);
}

#endif

#ifdef DEBUG_MAIN
void main(int argc, char *argv)
{
    for(int i=0;i<argc;i++)
    {
         #ifndef MANUAL_LENGTH
         prints(argv+i);// should print the argv offset of I.... Might need to refresh myself on this.
         #else
         // should calculate the length of the string now, and iterate over it byte by byte.
         prints((argv+i),manual_length((argv+i)));
         #endif
    }
    return;
}
#endif
