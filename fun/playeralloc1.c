/*
  I'm going to need to find a way to more consistently
  allocate the memory in a usable sense.

  define in strict c, then Preprocessor.  
  
  I'll make sure to add an INI file to adjust the base
  values.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#ifndef MTGPLAYER
#define MTGPLAYER
// global constants
const int playersize  = 32; // Player size definition
const int offset_name = 0 ; // name offset definition
const int offset_life = 20; // life offset definition
const int offset_pois = 23; // poison offset definition
const int offset_comm = 25; // commander offset definition.
// local limits.
const int max_name = 20;
const int max_life = 999;
const int max_poison = 10;
const int max_comm = 21;
// global variables
int    player_count = 0;
double last_player = 0; // store the last player that was used.

// global types
typedef struct PLAYERS {
/*
  Store the data about the
  player - we'll use these 
  to return to information 
  about a specific player.
*/
  int number;
  int life;
  int poison;
  int commander;
  char  name[20];
} PLAYER;

// PLAYER CONSTRUCTORS
PLAYER std_initialize(char name)
{
    PLAYER player_;
    player_.number = player_count+1;
    player_count++;
    last_player = player_.number;
    player_.life = 20;
    player_.poison = 0;
    player_.commander = 0;
    
    // returning a reference to player.
    return player_; 
}

PLAYER edh_initialize(char name)
{
    PLAYER player_;
    player_.number = player_count+1;
    player_count++;
    last_player = player_.number;
    player_.life = 40;
    player_.poison = 0;
    player_.commander = 0;
    return player_;
}

/*
  Pass in a string to update the player name with the name data.
  
*/
void update_name( PLAYER *player, char* name)
{
    // attempting to pass in a reference to the player
    // that the void can operate on then exit.
    //strcpy(name,player.name);// = name;
    strcpy(player->name,name);
    //return player;
}
#endif
// TEST MAIN:
// this works to handle the player allocation.
void main(int argc, char **argv)
{
    // currently setting a static maximum for the number of players in this main loop.
    PLAYER game[20];
    PLAYER pint;
    // should probably initialize based on the size of the integer/index...
    // generating a test- don't need to do too much.
    if(argc>20){argc = 20;}
    for(int i = 1;i<argc;i++)
    {
        // might change this to use an actual player value- not a reference.
        pint = edh_initialize(*argv[i]);
        //strcpy(pint.name, argv[i]); // This works to assign the name.
        PLAYER* ptr = &pint;
        // I keep for getting the & operator for making pointers..
        //memcpy(ptr,&pint,sizeof(pint)); // maybe this will work.
        update_name((PLAYER *)ptr, argv[i]); // trying to pass the pointer to pint.
        printf("Player poison counters: %d life: %d on %s\n",pint.poison, pint.life ,pint.name);
        pint.poison+=10;
        update_name((PLAYER *)ptr, argv[argc-i]);
        printf("Player poison counters: %d on %s\n",pint.poison, pint.name);
        game[i] = (PLAYER)pint;
    }
    for(int i = 1;i<argc;i++)
    {
        PLAYER tmp;
        // trying to set this up to run as a "PLAYER" pointer?
        tmp = (PLAYER)game[i];
        printf("Player (%d/%d): life: %d\n",i,player_count,tmp.life); // might be an effective pointer use.
    }
}