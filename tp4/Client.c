//
// Created by Usuario on 26-May-17.
//

#include "Client.h"

void makeReservation(Client* client, Recepcionist* recepcionist, int number){
    if(recepcionist->rooms[number]->status == "Available"){
        recepcionist->rooms[number]->status = "reserved";
        recepcionist->roomsOccupied = recepcionist->roomsOccupied + 1;
        printf("Room was reserved");
    }else{
        printf("The room: %d is %s \n",number,recepcionist->rooms[number]->status);
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
