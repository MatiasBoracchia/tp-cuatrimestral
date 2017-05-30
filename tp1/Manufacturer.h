//
// Created by Usuario on 24-May-17.
//



#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_MANUFACTURER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_MANUFACTURER_H
#include "Electrodomestic.h"
typedef struct manufacturer Manufacturer;

struct manufacturer{
    char* name;
    char* description;
    char* location;
    char* city;
    char* phoneNumber;
    char* web;
};

Manufacturer* createManufacturer(char* name, char* description, char* location, char* city, char* phoneNumber, char* web);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_MANUFACTURER_H