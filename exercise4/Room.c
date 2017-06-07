//
// Created by Usuario on 26-May-17.
//

#include "Room.h"

Room* createRoom(char* typeOfRoom, char* status, int numberOfRoom) {
    Room *room = malloc(sizeof(Room));
    room->numberOfRoom = numberOfRoom;
    room->status = status;
    room->typeOfRoom = typeOfRoom;

    return room;
}