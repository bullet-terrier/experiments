/*
  Building a representation of players
  Attempting to do this in C for the sake of... who knows.
*/

// This is the main project header
#include "mtgtypes.h"

// at least superficially this works.
typedef struct GAMES {
    int address;
    char *name;    
} GAME;

int add_player(){
    return (char *) malloc(PLAYERSIZE);
}

//
void replace_value(int address, int field, int **values)
{
    const int a = 0;
}

void assign_name(int address, char *name)
{
    char *n_buffer = (char *) address;
    n_buffer = n_buffer+PLAYERNAME;
    for(int i = 0;i<PLAYERNAMELEN;i++)
    {
      printf("value: %s at %f\n",*n_buffer, n_buffer);
    }
}


/*
  This almost works as designed - I'm going to need to figure out a way to store more information
  and write it out in a clean format.
*/
void main(int argc, char **argv)
{
  GAME cur_game[20];
  int buff = 0;
  int arlen = 0;
  int ptr = 0;
  if(argc>20)
  {
      argc=20;
  }
  for(int i = 1;i<argc;i++)
  {
     printf("%s\n",argv[i]);
     buff = add_player();
     printf("%s player at %d\n",argv[i],buff);
     cur_game[i].address = buff;
     cur_game[i].name = argv[i];
     printf("Working - cur_game[%d].address = %d;\n curr_game[%d].name=%s\n",i,cur_game[i].address,i,cur_game[i].name);
     //assign_name(buff, argv[i]);
     // I'm going to try writing to that buffer now.
     arlen = strlen(argv[i]);
     for(int j = 0;j<arlen;j++)
     {
         ptr = buff+PLAYERNAME+j;
         strcpy(argv[i],buff+PLAYERNAME+j); // I think this might work.
         printf("%d: %s\n",buff+PLAYERNAME+j,buff+PLAYERNAME+j);
     }
     printf("I can't believe it worked...");
     
  }
}
