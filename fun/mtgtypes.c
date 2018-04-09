/*
  Building a representation of players
  Attempting to do this in C for the sake of... who knows.
*/

// trying to offload all of the definitions into "mtgtypes.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "mtgtypes.h"
// should return the pointer to the location the player is stored in.
// there should be 32 indices in player from [0] to [31] allowing 
// us to assign values. see mtgtypes.h for that (some of these need to be moved there)

/*
  This function generates a new player object 
  at an arbitrary memory position.
  Returns the base memory position for the player start.
*/
int add_player(){
    return (char *) malloc(PLAYERSIZE);
}
    
    
/* moving this into the main loop.
void main(int argc, char **argv){
  int **pt_data;
  for(int i=1;i<argc;i++){
      printf("New Player %d at address: %d;",i,add_player());
  }
} 
*/