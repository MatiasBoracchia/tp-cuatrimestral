//
// Created by Usuario on 26-May-17.
//

#include "Client.h"

void makeReservation(Client* client, Room* room){
    if(room->status == "Available"){
        strcpy(room->status, "reserved");
        printf("Room was reserved");
    }else{
        printf("The room: %d is %s \n",room->numberOfRoom, room->status);
        return;
    }

    return;
}
Client* createClient(char* name, char* surname, int id){
    Client* client = malloc(sizeof(Client));
    client->id = id;
    client->surname = surname;
    client->name = name;

    return client;
}
