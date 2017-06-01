//
// Created by Usuario on 26-May-17.
//

#include "Invoice2.h"

void payForRoom(Invoice2* invoice, Client* client, Room* room){
//    invoice->clientId = client->id;
//    strcpy(invoice->clientName, client->name);
//    strcpy(invoice->clientSurname, client->surname);
//    strcpy(room->status, "Taken");
//    invoice->debt = 100;

}

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
