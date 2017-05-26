//
// Created by Usuario on 26-May-17.
//
#include "Recepcionist.h"

void giveInformation(Recepcionist* recepcionist){
    printf("Name of the Recepcionist: %s  %s \t Id: %d\n",recepcionist->name,recepcionist->surname, recepcionist->id);
    printf("Room Number \t Room type \t Room status \n");
    for (int i = 0; i < recepcionist->amountOfRooms; ++i) {

        printf("%d \t %s \t %s \n",(*recepcionist->rooms[i]).numberOfRoom,(*recepcionist->rooms[i]).typeOfRoom, (*recepcionist->rooms[i]).status);
    }

}
