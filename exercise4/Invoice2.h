//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE2_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE2_H

#include "Client.h"
#include "Room.h"

typedef struct invoice2 Invoice2;
struct invoice2 {
    int invoiceId;
    char *hotelName;
    char *clientName;
    char *clientSurname;
    int clientId;
    double debt;
};

Invoice2* createInvoice2(char* hotelName, char* clientName, char* clientSurname, int clientId, double debt, int invoiceId);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE2_H