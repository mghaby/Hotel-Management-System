#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "../include/bookRoom.h"
#include "../include/checkOut.h"
#include "../include/room.h"

int main(int argc, char *argv[]){
    // Variables
    FILE *fpointer;
    FILE *fOut;
    unsigned short majorDecision, majorDecisionBool;

    unsigned short roomBooking, bookingBool;

    unsigned short checkOutId, checkOutBool;
    int checkOutPass;

    unsigned short roomNum, roomBool;
    int yourRoomPassword;

    // Initialisation
    fpointer = fopen("../docs/db.txt", "r"); 
    fOut = fopen("../docs/pass.txt", "r+");
    majorDecisionBool = 1;
    bookingBool = 1;
    roomBool = 1;
    checkOutBool = 1;
    srand(time(NULL));

    // FILE IO Error Handling
    if (fpointer == NULL || fOut == NULL){
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }

    printf("Welcome to the Hotel! What would you like to do?\n");

    // Major Decision Loop
    while (majorDecisionBool == 1){
        printf("1. Book a Room, 2. Check-out, 3. Go to Your Room or 4. Leave \n");
        scanf("%hu", &majorDecision);
        
            if (majorDecision == 1){ // Book a Room
                printf("The Rooms available are:\n");
                getRoomsAvail(fpointer);
                printf("Which room would you like to book?\n");
                
                while (bookingBool){
                    scanf("%hu", &roomBooking);
                        if ((getRoomsBool(roomBooking, fpointer)) == 1){
                            printf("The room #%d is now yours!\n", roomBooking);
                            createAndWritePassword(roomBooking, fpointer, fOut);
                            bookingBool = 0;
                        }
                }

            } else if (majorDecision == 2){ // Check-out
                printf("Which room would you like to check-out?\n");
                while (checkOutBool){
                    scanf("%hu", &checkOutId);
                    printf("Please enter your password.\n");
                    scanf("%d", &checkOutPass);
                        if(checkOut(checkOutId, checkOutPass, fpointer, fOut) == 1){
                            printf("You have successfully checked out!\n");
                            checkOutBool = 0;
                        } else {
                            printf("Either your Room Number or Password is incorrect.\nPlease enter your Room Number again.\n");
                        }
                }

            } else if (majorDecision == 3){ // Go to Your Room
                printf("What is your Room?\n");
                while(roomBool){
                    scanf("%hu", &roomNum);
                    printf("Please enter your password.\n");
                    scanf("%d", &yourRoomPassword);
                        if (checkPassword(roomNum, yourRoomPassword, fpointer) == 1){
                            printf("You're in your room!\n");
                            roomBool = 0;
                        } else {
                            printf("Wrong Room or Password!\nPlease try again.\n");
                        }
                }

            } else if (majorDecision == 4){ // Leave Hotel
                printf("Thank You for Visiting. We hope you enjoyed your stay!\n");
                exit(1);

            } else { // Default
                printf("Invalid Decision. Try Again\n");
            }
    }

    // Closing Statements
    fclose(fpointer);
    fclose(fOut);
    return 0;
}