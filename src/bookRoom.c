#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "../include/bookRoom.h"

// Variables
int roomId;
int roomIdBool;
int pass;
char sR[255];

// Returns all available rooms
void getRoomsAvail(FILE *fp){
    int count = 1;
    char sCount[255];

    while (!feof(fp)){
        fscanf(fp, "%d %d %d", &roomId, &roomIdBool, &pass);

        if (roomIdBool == 0){ 
            sprintf(sCount, "Available: %d\n", count);
            printf("%s\n", sCount);
        }
        count++;
    }
}

// Returns whether a room is available or not given an id
int getRoomsBool(unsigned short id, FILE *fp){
    int count = 1;
    int bool = 0;

    while (!feof(fp)){
       fscanf(fp, "%d %d %d", &roomId, &roomIdBool, &pass);

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

// Generating and writing password to pass.txt and setting booked flag to '1'
void createAndWritePassword(unsigned short id, FILE *fp, FILE *out){
    fclose(fp);
    fp = fopen("../docs/db.txt", "r");

    while (!feof(fp)){
        fscanf(fp, "%d %d %d", &roomId, &roomIdBool, &pass);

        int n = rand() % 999999;

        if (n <= 99999){
            n = n + 100000;
        }

        if (roomId == id) {
            pass = n;
            roomIdBool = 1;
            printf("Your password is: %d\nBe sure to not lose this as you need this to get into your room and check-out!\n", pass);
        }

        sprintf(sR, "%d %d %d\n", roomId, roomIdBool, pass);
        fprintf(out, "%s", sR);
    }
}