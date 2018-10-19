/*
  MTGOPTIONS.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// now that the formalities are out of the way - let's do some
// mapping!

#ifndef KEYWORDS
#define KEYWORDS
// all of these will require interaction.
typedef struct KEYWORD_ARGUMENTS {
  // strings and implications.
  char player = "player";
  char poison = "poison";
  char command = "command";
  char life = "life";
  char add = "add";
  char remove = "remove";
  char help = "help";  
  char exit = "exit";
}
#endif