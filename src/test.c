#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]){
    //Variables
    FILE *fpointer;
    FILE *fOut;
    char c;

    fpointer = fopen("pass.txt", "r");
    fOut = fopen("db.txt", "w");

    if (fpointer == NULL){
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }
        
    c = fgetc(fpointer);
    while (c != EOF){
        fputc(c, fOut);
        c = fgetc(fpointer);
    }

    // close the file
    fclose(fpointer);
    fclose(fOut);

    return 0;


}