#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void getRoomsAvail(FILE *fp);

int getRoomsBool(unsigned short id, FILE *fp);

void createAndWritePassword(unsigned short id, FILE *out);

void reserve(unsigned short id);

#endif