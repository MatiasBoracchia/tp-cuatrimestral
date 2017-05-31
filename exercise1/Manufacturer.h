//
// Created by Usuario on 24-May-17.
//

#include <stdlib.h>
#include "Appliance.h"
#include "Provider.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_MANUFACTURER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_MANUFACTURER_H
typedef struct manufacturer Manufacturer;

struct manufacturer{
    char* name;
    char* description;
    char* location;
    char* city;
    char* phoneNumber;
    char* web;
    Appliance* applianceProduced;
    int appliancesProduced;
};
Manufacturer* createManufacturer(char* name, char* description, char* location, char* city, char* phoneNumber, char* web, Appliance* applianceProduced);
void supply(Manufacturer* manufacturer, Provider* provider, int quantity);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_MANUFACTURER_H