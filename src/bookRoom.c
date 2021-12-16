#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include "../Include/bookRoom.h"

void getRooms(unsigned short id, FILE *fp){
     const unsigned MAX_LENGTH = 256;
    char buffer[MAX_LENGTH];

    while (fgets(buffer, MAX_LENGTH, fp)){
    char * token = strtok(buffer, ",");
        while (token != NULL){
            printf("%s", token);
            token = strtok(NULL, ",");
        }


    }
    


    return 0;
}

int getRoomsVerify(unsigned short id);
















// for this to work we need to get the available rooms from the database
// then we need to return what rooms are available
// then we need to take input from the user asking what room they want
// then we need to check if the room selected is available (end users arent always going to follow rules)
// then we need to generate a password for the room
// then we need to write to the database that the room is booked