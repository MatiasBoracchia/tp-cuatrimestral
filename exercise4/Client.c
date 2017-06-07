//
// Created by Usuario on 26-May-17.
//

#include "Client.h"

void makeReservation(Client* client, Receptionist* receptionist, int number) {
    if (receptionist->rooms[number]->status == "Available") {
        receptionist->rooms[number]->status = "Reserved";
        receptionist->roomsOccupied = receptionist->roomsOccupied + 1;
        printf("Room was reserved \n");
    } else {
        printf("The room: %d is %s \n", number, receptionist->rooms[number]->status);
        return;
    }
    return;
}

Client* createClient(char* name, char* surname, int id) {
    Client *client = malloc(sizeof(Client));
    client->id = id;
    client->surname = surname;
    client->name = name;
    return client;
}

Invoice2* payForRoom(Client* client, Room* room) {
    Invoice2 *invoice2 = createInvoice2("Paquitos", client->name, client->surname, client->id, 100, 20657);
    room->status = "Occupied";
    return invoice2;
}