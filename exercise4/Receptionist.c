//
// Created by Usuario on 26-May-17.
//

#include "Receptionist.h"

void giveInformation(Receptionist* receptionist) {
    printf("Name of the Receptionist: %s  %s \t Id: %d\n", receptionist->name, receptionist->surname, receptionist->id);
    printf("Room Number \t Room type \t Room status \n");
    for (int i = 0; i < receptionist->maxCapacity; ++i) {
        printf("%d \t %s \t %s \n", receptionist->rooms[i]->numberOfRoom, receptionist->rooms[i]->typeOfRoom,
               receptionist->rooms[i]->status);
    }
}

Receptionist* createReceptionist(char* name, char* surname,int maxCapacity,int id) {
    Receptionist *receptionist = malloc(sizeof(Receptionist));
    receptionist->id = id;
    receptionist->name = name;
    receptionist->surname = surname;
    receptionist->maxCapacity = maxCapacity;
    receptionist->roomsOccupied = 0;
    receptionist->rooms = malloc(sizeof(Room *) * receptionist->maxCapacity);
    for (int i = 0; i < maxCapacity; i++) {
        Room *room = malloc(sizeof(Room));
        room->numberOfRoom = i + 1;
        room->status = "Available";
        if (i < 3) {
            room->typeOfRoom = "Suite";
        } else if (i == 4) {
            room->typeOfRoom = "Presidential";
        } else {
            room->typeOfRoom = "Normal";
        }
        receptionist->rooms[i] = room;
    }
    return receptionist;
}