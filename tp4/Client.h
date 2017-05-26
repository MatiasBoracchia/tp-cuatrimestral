//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CLIENT_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CLIENT_H

#include "Room.h"
#include "Recepcionist.h"
typedef struct client Client;
struct client{
    char name[15];
    char surname[15];
    int id;
};
void makeReservation(Client* client, Room* room);
void askInformation(Client* client, Recepcionist* recepcionist);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CLIENT_H
