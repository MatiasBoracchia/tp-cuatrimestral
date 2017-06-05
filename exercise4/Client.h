//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CLIENT_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CLIENT_H

#include "Room.h"
#include "Receptionist.h"
#include "Invoice2.h"
#include <stdlib.h>
typedef struct client Client;
struct client{
    char* name;
    char* surname;
    int id;
};
Client* createClient(char* name, char* surname, int id);
void makeReservation(Client* client,Receptionist* receptionist,int number);
Invoice2* payForRoom(Client* client, Room* room);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CLIENT_H
