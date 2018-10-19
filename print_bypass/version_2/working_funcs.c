// Need to rename to _prints_

// prints does function - the main problem lies in the usage of len.
void prints(
    char *msg,
#ifdef MANUAL_LENGTH
    int len
#endif
)
// what needs to be pulled apart here? --> looks like I need to handle the output...
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
    //for(int i = 0; i < len^BREAKLEN; i++)
    // so len will need to be passed in.
    for(int i = 0; i< len; i++)
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

