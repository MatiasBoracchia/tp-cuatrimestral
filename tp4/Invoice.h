//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H

#include "Client.h"
#include "Room.h"
typedef struct invoice Invoice;
struct invoice{
    int invoiceId;
    char* hotelName;
    char* clientName;
    char* clientSurname;
    int clientId;
    double debt;
};
Invoice* createInvoice(char* hotelName, char* clientName, char* clientSurname, int clientId, double debt, int invoiceId);
void payForRoom(Invoice* invoice, Client* client, Room* room);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H
