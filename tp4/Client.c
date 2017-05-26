//
// Created by Usuario on 26-May-17.
//

#include "Client.h"

void makeReservation(Client* client, Room* room){
    if(room->status == "Available"){
        strcpy(room->status, "reserved");
    }else{
        printf("The room: %d is %s",room->numberOfRoom, room->status);
    }


}
