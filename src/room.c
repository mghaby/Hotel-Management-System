#include <stdio.h>
#include <stdlib.h>

#include "../include/room.h"

// Variables
int roomId, roomIdBool, pass;

// Takes the target room and password and verifies if it is correct against the db.txt file
int checkPassword(unsigned short id, int passW, FILE *fp){
    fclose(fp);
    fp = fopen("../docs/db.txt", "r");

    while (!feof(fp)){
        fscanf(fp, "%d %d %d", &roomId, &roomIdBool, &pass);

        if (roomIdBool == 1 && (id == roomId) && passW == pass){
            return 1;
        }
    }
    return 0;
}