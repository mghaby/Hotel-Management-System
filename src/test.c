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
        




    // close the file
    fclose(fpointer);
    fclose(fOut);

    return 0;


}