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

    unsigned short roomBooking;
    unsigned short bookingBool;

    unsigned short yourRoomDecision;
    char yourRoomPassword[7];
    unsigned short roomBool;

    // Initialisation
    fpointer = fopen("../docs/db.txt", "r"); 
    fout = fopen("../docs/db.txt", "r+"); // non destructive // read and write can also try a+ or w/ w+
    majorDecisionBool = 1;
    bookingBool = 1;
    roomBool = 1;


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
                printf("The Rooms available are:\n");
                // getRooms
                // print the rooms
                printf("Which room would you like to book?\n");
                while (bookingBool){
                scanf("%hu", &roomBooking);
                    // if (getRoomsVerify(roomBooking) == 1){
                        // printf("The room is now yours!\n");
                        // printf("Your password is: %s\n", getPassword(roomBooking));
                        // printf("You'll need this to checkout and enter your room!\n");
                        // Write to database that the room is booked and the generated password
                        // bookingBool = 0;
                    //} else {
                        // printf("The room is not available!\n");
                    //}              
                }

            } else if (majorDecision == 2){ // Check-out
                printf("Check-out\n");


            } else if (majorDecision == 3){ // Go to your room
                printf("What is your Room?\n");
                while(roomBool){
                // get room number

                // another while loop to get password
                scanf("%s", &yourRoomPassword);
                    // if (checkPassword(yourRoomPassword) == 1){
                        // printf("You're in your room!\n");
                        // exit(1);
                    //} else {
                        // printf("Wrong password!\n");
                    //}

                }
                


            } else if (majorDecision == 4){ // Leave
                printf("Thank You for Visiting. We hope you enjoyed your stay!\n");
                exit(1);

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