/*
  Building the precrursor definition.
  
  How many bytes in memory do I want to use to store player information....
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef MTGTYPES
#define MTGTYPES

// We'll keep it simple for now.
// I could allocate 200 bytes per player maybe...
// Player should look like the following
// 11222333333333333333333334455
// [0] 1) 2  player ID
// [2] 2) 4  player Life Counters
// [6] 3) 20 player Name
// [26]4) 4  player poison Counters
// [30]5) 2  player commander Damage
// 32 BYTES worth of information if each position is 0;.


//treat player data as follows
int player();

/*
  Defining player data constants as WORDS.
*/

#ifndef PLAYERSIZE
#define PLAYERSIZE 32*(sizeof(char))
#endif

#ifndef PLAYERID
#define PLAYERID 0
#endif

#ifndef PLAYERLIFE
#define PLAYERLIFE 2
#endif

#ifndef PLAYERNAME
#define PLAYERNAME 6
#endif

#ifndef POISON
#define POISON 26
#endif

#ifndef COMMANDER
#define COMMANDER 30
#endif

#ifndef ENTITYLENS
#define ENTITYLENS 
#define PLAYERIDLEN 2
#define PLAYERNAMELEN 20
#define PLAYERLIFELEN 4
#define PLAYERPOISONLEN 4
#define PLAYERCOMMANDERLEN 2
#endif

#ifndef FIELD_MAP
#define FIELD_MAP
const int fields[] = {
  PLAYERID,
  PLAYERNAME,
  POISON,
  COMMANDER};
#endif


/*
  INCLUDING THIS TO ALLOW DEBUGGING OF INCOMPLETE FILES.

#ifndef MAIN
#define MAIN
void  main(int argc, char **argv)
{
    return 0;
}
#endif
*/
#endif