#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void getRoomsAvail(FILE *fp);

int getRoomsVerify(unsigned short id);



// for this to work we need to get the available rooms from the database
// then we need to return what rooms are available
// then we need to take input from the user asking what room they want
// then we need to check if the room selected is available (end users arent always going to follow rules)
// then we need to generate a password for the room
// then we need to write to the database that the room is booked

#endif