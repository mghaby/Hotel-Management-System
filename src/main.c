#include <stdio.h>
#include <stdlib.h>

#include "../Include/checkIn.h"
#include "../Include/checkOut.h"

// gcc main.c checkIn.c checkOut.c -o main -Wall

int main(int argc, char *argv[]){
    // Variables
    FILE *fpointer;
    FILE *fout;
    unsigned short majorDecision;
    unsigned short majorDecisionBool;

    // Initialisation
    fpointer = fopen("../docs/db.txt", "r"); 
    fout = fopen("../docs/db.txt", "r+"); // non destructive read and write can also try a+ or w/ w+
    majorDecisionBool = 1;


    if (fpointer == NULL || fout == NULL){
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }

    // Hotel ASCII

    // Print Welcome Message
    printf("Welcome to the Hotel! What would you like to do?\n");

    while (majorDecisionBool == 1){
        printf("1. Check-in, 2. Check-out, 3. Go to your room or 4. Leave \n");
        scanf("%hu", &majorDecision);
        
            if (majorDecision == 1){ // Check-in
                printf("Check-in\n");
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



    // Print what you would like to do (1) Check-in, (2) Check-out, (3) Go in Room, (4) Exit
        // if 1 call the check in start function from check in

        // if 2 call the check out start function from check out

        // if 3 go into room
            // ask for room number and password
            // print room ASCII
            // Print option list : (1) walk out a

        // if 4 exit





    return 0;
}

// Have an ASCII UI that asks if you want to book a room, check out of a room or go in a room.
// If you want to book a room it will return what rooms are available and you can select a room. 
    // After you select a room it will give you a randomly generated password

// If you want to go inside a room you have to enter what room and the password.
    // If you enter the wrong password you will be told that you have entered the wrong password.
    // If you enter the correct password you will be able to enter the room.

// If you want to check out a room you must enter the room number and the password and the room will be checked out.
    // If you enter the wrong password you will be told that you have entered the wrong password.
    // If you enter the correct password you will be told that you have checked out of the room.

// The "Database" will be a text file or JSON file that will hold the room numbers and the status of the rooms.