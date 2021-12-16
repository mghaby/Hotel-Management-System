#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include "../Include/bookRoom.h"

int roomId;
int roomIdBool;

void getRoomsAvail(FILE *fp){
    int count = 1;
    char sCount[255];

    while (!feof(fp)){
        fscanf(fp, "%d %d", &roomId, &roomIdBool);

        if (roomIdBool == 0){ 
            sprintf(sCount, "Available: %d\n", count);
            printf("%s\n", sCount);
        }
        count++;
    }
}

int getRoomsBool(unsigned short id, FILE *fp){
    int count = 1;
    int bool = 0;

    while (!feof(fp)){
       fscanf(fp, "%d %d", &roomId, &roomIdBool);

       if (count == id && roomIdBool == 0){
           bool = 1;
       } else {
           count++;
       }
    }

    if (bool == 1){
        return 1;
    } else {
        printf("Sorry, that room is not available.\nPlease choose another room.\n");
        return 0;
    }
}

void createAndWritePassword(FILE *out){




    printf("create and write");
}

// then we need to generate a password for the room
// then we need to write to the database that the room is booked