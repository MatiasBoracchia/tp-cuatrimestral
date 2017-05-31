//
// Created by Usuario on 24-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H
#include <stdio.h>
#include "Manufacturer.h"
#include "Cart.h"

typedef struct appliance Appliance;
struct appliance {
    char* name;
    char* model;
    float price;
    int tag;
};
Appliance* createAppliance(char* name, char* model, float price);
void setPrice(Appliance* electrodomestic , float newPrice);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H




