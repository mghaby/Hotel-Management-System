#include <stdio.h>
#include <stdlib.h>

#include "../include/checkOut.h"

// Variables
FILE *fpointer;
FILE *fOut;
int roomId, roomIdBool, pass;
char sR[255];
char c;

// Copies the contents of pass.txt file to the db.txt file
void syncDB(){
    fpointer = fopen("../docs/pass.txt", "r");
    fOut = fopen("../docs/db.txt", "w");
    
    if (fpointer == NULL){
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }
 
    c = fgetc(fpointer);
    while (c != EOF){
        fputc(c, fOut);
        c = fgetc(fpointer);
    }
    fclose(fpointer);
    fclose(fOut);
}

// Verifies the room is booked and the password is valid, sets the booking flag to 0 as well as the password to default
int checkOut(unsigned int id, int passW, FILE *fp, FILE *out){
    fclose(fp);
    fp = fopen("../docs/db.txt", "r");
    syncDB();

    while (!feof(fp)){
        fscanf(fp, "%d %d %d", &roomId, &roomIdBool, &pass);

        if (roomIdBool == 1 && (id == roomId) && passW == pass){
            roomIdBool = 0;
            pass = 0;
            sprintf(sR, "%d %d %d\n", roomId, roomIdBool, pass);
            fprintf(out, "%s", sR);
            fclose(out);
            return 1;
        }
    }
    return 0;
}