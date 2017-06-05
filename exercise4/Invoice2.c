//
// Created by Usuario on 26-May-17.
//

#include "Invoice2.h"



Invoice2* createInvoice2(char* hotelName, char* clientName, char* clientSurname, int clientId, double debt, int invoiceId){
    Invoice2* invoice = malloc(sizeof(Invoice2));
    invoice->clientId = clientId;
    invoice->clientName = clientName;
    invoice->clientSurname = clientSurname;
    invoice->debt = debt;
    invoice->hotelName =hotelName;
    invoice->invoiceId = invoiceId;
    return invoice;
}
