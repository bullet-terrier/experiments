/*
  Building a module to install my python programs
  1) will need to do directory traversal after getting
     the user to pass the path to the python executable
  2) will update all of the shebangs in the python files
     with the path that was passed
  3) must be written in C in order to allow them to compile
     in a cross platform-type mechanism.
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <stdarg.h>

int storage_location(char path)
{
  // aiming to return an integer address of some value. 
  //int x = **path;
  return 0;
}

// wasn't expecting information in form of pointer -
// need to get more familiar with pointer conversions (when under time pressure);
int check_arg(char *arg)
{
  /*
    This loop checks that the length of the string isn't longer than the 
  */
  int iserr = 0;
  if(strlen(arg)> PATH_MAX)
  {
      iserr = 1;
  }
  return iserr;
}

// do things.
// this kinda works... better than it was
// next thing is the main loop trying to get all of th data.
int main(int argc, char **argv)
{
  int err_count = 0;
  /*
    this routine successfully parses arguments for length 
    and will break if one is longer than the proper path length.
  */
  for(int i = 1;i<argc;i++)
  {
    printf("Length of %s is %d\n",argv[i],(int)strlen(argv[i]));
    // alrighty - now this is working.
    if(check_arg(argv[i])>0){
        err_count++;
        printf("An Error has occurred - argument was too long for use.\n");
        break;
    }
  }
  printf("Exited the loop.\n");
  return 0;
}