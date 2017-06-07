//
// Created by Usuario on 06-Jun-17.
//

#include "SellLine.h"
#include <stdlib.h>
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_REGISTEREDUSER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_REGISTEREDUSER_H
typedef struct registeredUser RegisteredUser;
struct registeredUser{
    char* name;
    int DNI;
    char* location;
    char* country;
    SellLine* aSellLine;
};
RegisteredUser* createRegisteredUser(char* name, int DNI, char* location, char* country);
float makePurchaseOfSellLine(RegisteredUser* registeredUser1); //empty the sellLine
void addASellLIne(RegisteredUser* registeredUse, SellLine* sellLine1);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_REGISTEREDUSER_H
