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

int getRoomsBool(unsigned short id);


/**

int main(int argc, char *argv[]){
    //Variables
    FILE *fpointer;
    //FILE *fout;
    int roomId;
    int roomIdBool;

    fpointer = fopen("../docs/db.txt", "r"); 
    //fout = fopen("db.txt", "w+");
    
    if (fpointer == NULL){
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }
        
    while (!feof(fpointer)){
        fscanf(fpointer, "%d %d", &roomId, &roomIdBool);
        printf("Room ID :%d  taken or no :%d\n", roomId, roomIdBool);
    }

    // close the file
    fclose(fpointer);

    return 0;
} 
*/

// for this to work we need to get the available rooms from the database
// then we need to return what rooms are available
// then we need to take input from the user asking what room they want
// then we need to check if the room selected is available (end users arent always going to follow rules)
// then we need to generate a password for the room
// then we need to write to the database that the room is booked