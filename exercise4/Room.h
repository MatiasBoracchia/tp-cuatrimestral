//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_ROOM_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_ROOM_H

typedef struct room Room;
struct room {
    int numberOfRoom;
    char *typeOfRoom;
    char *status;
};

Room* createRoom(char* typeOfRoom, char* status, int numberOfRoom);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_ROOM_H
