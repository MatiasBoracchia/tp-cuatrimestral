//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_RECEPCIONIST_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_RECEPCIONIST_H

#include "Room.h"

typedef struct receptionist Receptionist;
struct receptionist {
    char *name;
    char *surname;
    Room **rooms;
    int maxCapacity;
    int roomsOccupied;
    int id;
};

Receptionist* createReceptionist(char* name, char* surname,int maxCapacity,int id);

void giveInformation(Receptionist* receptionist);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_RECEPCIONIST_H