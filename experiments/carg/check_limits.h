#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <signal.h>

// Define limit_break which will help set up a mechanism for forcing a break if
// some arbitrary value exceeds the limits necessary for the operating system.
#ifndef limit_break
#define limit_break

int path_length(char path)
{
  // check the path to make sure it is smaller than the system defined maximum.
  int error_found = 0;
  
  if(strlen(path)>PATH_MAX)
  {
    error_found++;
  }
  
  return error_found;  
}

// check the fatal length of a path presented to the program.
void fatal_length(char path)
{
  if(strlen(path)>PATH_MAX)
  {
      SIG_ERR;
  }        
}

int bits_in_str(char value)
{
  // get the number of bits used;
  int output = (int)strlen(value)*CHAR_BITS;
}
#endif
