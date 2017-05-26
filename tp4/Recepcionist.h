//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_RECEPCIONIST_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_RECEPCIONIST_H

#include "Room.h"
typedef struct recepcionist Recepcionist;
struct recepcionist{
    char name[15];
    char surname[15];
    Room rooms[20];
    int id;
    int amountOfRooms;
};
void giveInformation(Recepcionist* recepcionist);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_RECEPCIONIST_H
