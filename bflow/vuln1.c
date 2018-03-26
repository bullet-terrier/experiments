#include <stdio.h>
// first things first - was declaring my includes wrong
#include <string.h>
// additionally, I forgot string



/*
 to use this, run gdb /path/to/code
 then pass in parameters with run to execute and analyze.
 have fun...
*/




// next I only got the address of argv, not the contents.
// they used char **argv to have fun.
int main(int argc, char *argv)
{
  puts("we're gonna have a ball!");
  // this was correct.
  char x[5];
  // trying to get the content of the pointer
  // this is not. see the exvuln.c code for
  // the proper way to implement what is going on here.
  strcpy(argv[1],*x);
  return 0;
}
