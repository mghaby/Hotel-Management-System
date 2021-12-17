#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../Include/bookRoom.h"

int roomId;
int roomIdBool;
int pass;

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


void createAndWritePassword(unsigned short id, FILE *fp, FILE *out){
   char sR[255];

    fclose(fp);
    fp = fopen("../docs/db.txt", "r");
    fclose(out);
    out = fopen("../docs/pass.txt", "r+");

    while (!feof(fp)){
        fscanf(fp, "%d %d %d", &roomId, &roomIdBool, &pass);

        int n = rand() % 999999;

        if (n <= 99999){
            n = n + 100000;
        }

        if (roomId == id) {
            pass = n;
            printf("Your password is: %d\nBe sure to not lose this as you need this to get into your room and check-out!\n", pass);
            reserve(id, out);
        }

        sprintf(sR, "%d %d %d\n", roomId, roomIdBool, pass);
        //fwrite(sR, sizeof(char), strlen(sR), out); // +-------------------------------------------
        fprintf(out, "%s", sR); // +------------------------------------------- Everything working up to this print (wont write to text file)

   }
}


void reserve(unsigned short id, FILE *out){
    

}

// then we need to write to the database that the room is booked