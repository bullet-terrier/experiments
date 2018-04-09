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

// update methods - might consolidate into one w/ flow control
void update_life( PLAYER *player, int life)
{
    player->life = player->life + life;
}

void update_poison( PLAYER *player, int poison)
{
    player->poison = player->poison + poison;
}

void update_command( PLAYER *player, int command)
{
    player->commander = player->commander + command;
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
