#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
    //Variables
    FILE *fpointer;
    //FILE *fout;
    int roomId;
    int roomIdBool;

    fpointer = fopen("db.txt", "r"); 
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