//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H

#include "Client.h"
#include "Room.h"
typedef struct invoice Invoice;
struct invoice{
    int id;
    char hotelName[10];
    char clientName[15];
    char clientSurname[15];
    int clientId;
    double debt;
};
void payForRoom(Invoice* invoice, Client* client, Room* room);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H
