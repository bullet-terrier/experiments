/*
  Building a module to install my python programs
  1) will need to do directory traversal after getting
     the user to pass the path to the python executable
  2) will update all of the shebangs in the python files
     with the path that was passed
  3) must be written in C in order to allow them to compile
     in a cross platform-type mechanism.
     
  Has some solid stuff playing with stdio... need to get more
  practice making useful stuff like that.
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

// breaking this into more processes.
int process_args(int counter, char **args)
{
  int errs = 0;
  for(int i = 1;i<counter;i++)
  {
    printf("Length of %s is %d\n",args[i],(int)strlen(args[i]));
    // alrighty - now this is working.
    if(check_arg(args[i])>0){
        errs++;
        printf("An Error has occurred - argument was too long for use.\n");
        // break; // ( This was originally to force exit - I wan't to keep processing for now.)
        //errs++;
    }
  }
  return errs;
}


// do things.
// this kinda works... better than it was
// next thing is the main loop trying to get all of th data.
int main(int argc, char **argv)
{
  int char_lens = 0;
  char *tmp[PATH_MAX];
  int err_count = 0;
  for (int a = 0; a<argc; a++)
  {
    // this works.
    //printf("argument %d of %d: %s\n",a,argc,argv[a],stdout);
    
    // testing fprint;
    // this also works;
    fprintf(stdout,"argument %d of %d: %s\n",a,argc,argv[a],stdout);
    if (err_count == 0)
    {
      fprintf(stdout,"Try writing something: ");
      strcpy(*fread(tmp,PATH_MAX,0,stdin),tmp); // I *can* return input like this.
      //fprintf(stdout,"%s\n",fread(tmp,PATH_MAX,1,stdin));
      fprintf(stdout,"%s\n",tmp);
    }
  }
  /*
    this routine successfully parses arguments for length 
    and will break if one is longer than the proper path length.
  */
  err_count = process_args(argc,argv);
  printf("ENCOUNTERED %d ERRORS!",err_count);
  printf("Exited the loop.\n");
  return 0;
}