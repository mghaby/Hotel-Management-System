#include <stdio.h>
#include <stdlib.h>

#include "../Include/bookRoom.h"
#include "../Include/checkOut.h"
#include "../Include/room.h"

// gcc main.c bookRoom.c checkOut.c -o main -Wall

int main(int argc, char *argv[]){
    // Variables
    FILE *fpointer;
    FILE *fout;
    unsigned short majorDecision;
    unsigned short majorDecisionBool;
    unsigned short roomDecision;

    // Initialisation
    fpointer = fopen("../docs/db.txt", "r"); 
    fout = fopen("../docs/db.txt", "r+"); // non destructive // read and write can also try a+ or w/ w+
    majorDecisionBool = 1;


    if (fpointer == NULL || fout == NULL){
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }

    // Hotel ASCII

    // Print Welcome Message
    printf("Welcome to the Hotel! What would you like to do?\n");

    while (majorDecisionBool == 1){
        printf("1. Book a Room, 2. Check-out, 3. Go to Your Room or 4. Leave \n");
        scanf("%hu", &majorDecision);
        
            if (majorDecision == 1){ // Book a Room
                printf("Book a Room\n");


            } else if (majorDecision == 2){ // Check-out
                printf("Check-out\n");


            } else if (majorDecision == 3){ // Go to your room
                printf("Go to your room\n");
                


            } else if (majorDecision == 4){ // Leave
                printf("Thank You for Visiting. We hope you enjoyed your stay!\n");
                majorDecisionBool = 0;

            } else {
                printf("Invalid Decision. Try Again\n");
            }
    }





        // if 3 go into room
            // ask for room number and password
            // print room ASCII
            // Print option list : (1) walk out 







    return 0;
}