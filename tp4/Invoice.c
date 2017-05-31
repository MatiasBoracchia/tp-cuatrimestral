//
// Created by Usuario on 26-May-17.
//

#include "Invoice.h"

void payForRoom(Invoice* invoice, Client* client, Room* room){
//    invoice->clientId = client->id;
//    strcpy(invoice->clientName, client->name);
//    strcpy(invoice->clientSurname, client->surname);
//    strcpy(room->status, "Taken");
//    invoice->debt = 100;

}
Invoice* createInvoice(char* hotelName, char* clientName, char* clientSurname, int clientId, double debt, int invoiceId){
    Invoice* invoice = malloc(sizeof(Invoice));
    invoice->clientId = clientId;
    invoice->clientName = clientName;
    invoice->clientSurname = clientSurname;
    invoice->debt = debt;
    invoice->hotelName =hotelName;
    invoice->invoiceId = invoiceId;
    return invoice;
}
