#include <stdio.h>
#include <stdlib.h>

#include "../include/checkOut.h"

int roomId;
int roomIdBool;
int pass;
char sR[255];
char c;

void syncDB(FILE *fp, FILE *out){
    fclose(fp);
    fclose(out);
    fp = fopen("../docs/pass.txt", "r");
    out = fopen("../docs/db.txt", "w");
    
    if (fp == NULL){
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }
        
    c = fgetc(fp);
    while (c != EOF){
        fputc(c, out);
        c = fgetc(fp);
    }

    fclose(fp);
    fclose(out);
    fp = fopen("../docs/pass.txt", "r");
    out = fopen("../docs/pass.txt", "r+");
}


int checkOut(unsigned int id, int passW, FILE *fp, FILE *out){
    syncDB(fp, out);

    while (!feof(fp)){
        fscanf(fp, "%d %d %d", &roomId, &roomIdBool, &pass);

        if (roomIdBool == 1 && id == roomId && passW == pass){
            roomIdBool = 0;
            pass = 0;
            sprintf(sR, "%d %d %d\n", roomId, roomIdBool, pass);
            fprintf(out, "%s", sR);
            return 1;
        }

    }

    return 0;
}

// void createAndWritePassword(unsigned short id, FILE *fp, FILE *out){
//     fclose(fp);
//     fp = fopen("../docs/db.txt", "r");

//     while (!feof(fp)){
//         fscanf(fp, "%d %d %d", &roomId, &roomIdBool, &pass);

//         int n = rand() % 999999;

//         if (n <= 99999){
//             n = n + 100000;
//         }

//         if (roomId == id) {
//             pass = n;
//             roomIdBool = 1;
//             printf("Your password is: %d\nBe sure to not lose this as you need this to get into your room and check-out!\n", pass);
//         }

//         sprintf(sR, "%d %d %d\n", roomId, roomIdBool, pass);
//         fprintf(out, "%s", sR);
//     }
// }