#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]){
    //Variables
    FILE *fpointer;
    FILE *fOut;
    char sR[255];

    int roomId;
    int roomIdBool;
    int pass;
    int id = 5;

    int count = 1;
    int bool = 0;
    srand(time(NULL));

    int majorBool = 1;

    fpointer = fopen("db.txt", "r");
    fOut = fopen("bruh.txt", "r+");

    
    if (fpointer == NULL){
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }
        
    while (majorBool){ // ------------------------------------------------------


    while (!feof(fpointer)){
        fscanf(fpointer, "%d %d %d", &roomId, &roomIdBool, &pass);

        int n = rand() % 999999;
        if (n <= 99999){
            n = n + 100000;
        }

        if (id == count){
            pass = n;
        }

        sprintf(sR, "%d %d %d\n", roomId, roomIdBool, pass);
        fprintf(fOut, "%s", sR);

        count++;

    }

    majorBool = 0;
    } // ------------------------------------------------------




    // close the file
    fclose(fpointer);
    fclose(fOut);

    return 0;


}


  // while (!feof(fpointer)){
    //     fscanf(fpointer, "%d %d", &roomId, &roomIdBool);
    //     printf("Room ID :%d  taken or no :%d\n", roomId, roomIdBool);
    // }


//     void createAndWritePassword(unsigned short id, FILE *out){
//     char sR[255];
//     srand(time(NULL));

//     int r = rand() % 999999;

//     if (r <= 99999){
//         r = r + 100000;
//     }

//     char sR[255];
//     sprintf(sR, "%d", r);
//     fprintf(out, "%s\n", sR);


//     printf("create and write");
// }
