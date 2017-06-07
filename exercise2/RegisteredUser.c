//
// Created by Usuario on 06-Jun-17.
//

#include "RegisteredUser.h"

RegisteredUser* createRegisteredUser(char* name, int DNI, char* location, char* country) {
    RegisteredUser *registeredUser1 = malloc(sizeof(RegisteredUser));
    registeredUser1->name = name;
    registeredUser1->DNI = DNI;
    registeredUser1->location = location;
    registeredUser1->country = country;
    registeredUser1->aSellLine = malloc(sizeof(SellLine));
    return registeredUser1;
}

float makePurchaseOfSellLine(RegisteredUser* registeredUser1) {
    float f = registeredUser1->aSellLine->totalCost;
    int i = registeredUser1->aSellLine->id;
    registeredUser1->aSellLine = createSellLine(i + 1, 20);
}

void addASellLIne(RegisteredUser* registeredUse, SellLine* sellLine1) {
    registeredUse->aSellLine = sellLine1;
}