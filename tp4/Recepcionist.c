//
// Created by Usuario on 26-May-17.
//
#include "Recepcionist.h"

void giveInformation(Recepcionist* recepcionist){
    printf("Name of the Recepcionist: %s  %s \t Id: %d\n",recepcionist->name,recepcionist->surname, recepcionist->id);
    printf("Room Number \t Room type \t Room status \n");
    for (int i = 0; i < recepcionist->maxCapacity; ++i) {

        printf("%d \t %s \t %s \n",recepcionist->rooms[i]->numberOfRoom,recepcionist->rooms[i]->typeOfRoom, recepcionist->rooms[i]->status);
    }
}
Recepcionist* createRecepcionist(char* name, char* surname,int maxCapacity,int id){
    Recepcionist* recepcionist = malloc(sizeof(Recepcionist));
    recepcionist->id = id;
    recepcionist->name = name;
    recepcionist->surname = surname;
    recepcionist->maxCapacity = maxCapacity;
    recepcionist->roomsOccupied = 0;

    recepcionist->rooms = malloc(sizeof(Room*)*recepcionist->maxCapacity);
    for(int i=0;i<maxCapacity;i++){
        Room* room = malloc(sizeof(Room));
        room->numberOfRoom = i+1;
        room->status = "Available";
        if(i<3){
            room->typeOfRoom = "Suite";
        }else if(i==4){
            room->typeOfRoom = "Presidential";
        }
        else{
            room->typeOfRoom = "Normal";
        }
        recepcionist->rooms[i]=room;
    }
    return recepcionist;

}
