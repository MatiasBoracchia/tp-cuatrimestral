//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CLIENT_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CLIENT_H

#include "Room.h"
#include "Recepcionist.h"
#include <stdlib.h>
typedef struct client Client;
struct client{
    char* name;
    char* surname;
    int id;
};
Client* createClient(char* name, char* surname, int id);
void makeReservation(Client* client,Recepcionist* recepcionist,int number);
void askInformation(Client* client, Recepcionist* recepcionist);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CLIENT_H
