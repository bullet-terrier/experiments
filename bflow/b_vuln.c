
#include <stdio.h>
#include <string.h>

/*

  Looks like I was running into some issues...

*/

// use gdb and try to step through - it looks like calling as main return some weirdness, I'mgoing to try backing it out to see what happens.
//
// update - I'm just going to cout the chars in the string, then see what happens.
// I'll just wrap everything together in main...
int main(int argc, char **argv)
{
    // define the buffer?
    // simply put let's try something else-
    int size = sizeof(argv[1]);
    char buffer[size-8]; // I'll need to see if this can even compile...
    FILE *alpha = fopen("./mechanism.txt","w"); // interesting - it seems to truncate it at this point.
    char tbuff[size];
    strcpy(argv[1],tbuff);
    //printf("test",alpha);
    printf("test",alpha);
    char f[size];
    int a =0;
    while (a < size){
        strcat(f,"a");
        a++;
    }
    fprintf(alpha,f);
    char *delt = (char) **size;
    printf(delt);
    return 0;
}