//
// Created by Usuario on 24-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H
#include <stdio.h>
#include "Manufacturer.h"

typedef struct appliance Appliance;
struct appliance {
    char* name;
    char* model;
    float price;
    Manufacturer* manufacturer;
};
Appliance* createElectrodomestic(char* name, char* model, float price, Manufacturer* manufacturer);
void setPrice(Appliance* electrodomestic , float newPrice);


#endif //TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H




