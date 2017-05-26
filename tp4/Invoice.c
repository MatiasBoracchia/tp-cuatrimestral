//
// Created by Usuario on 26-May-17.
//

#include "Invoice.h"

void payForRoom(Invoice* invoice, Client* client, Room* room){
    invoice->clientId = client->id;
    strcpy(invoice->clientName, client->name);
    strcpy(invoice->clientSurname, client->surname);
    strcpy(room->status, "Taken");
    invoice->debt = 100;

}
