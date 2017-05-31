//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_RECEPCIONIST_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_RECEPCIONIST_H

#include "Room.h"
typedef struct recepcionist Recepcionist;
struct recepcionist{
    char* name;
    char* surname;
    Room** rooms;
    int maxCapacity;
    int roomsOccupied;
    int id;
    int amountOfRooms;
};
Recepcionist* createRecepcionist(char* name, char* surname,int maxCapacity,int id, int amounOfRooms);
void giveInformation(Recepcionist* recepcionist);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_RECEPCIONIST_H
