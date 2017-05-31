//
// Created by Usuario on 24-May-17.
//

#include <stdlib.h>

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
};

Manufacturer* createManufacturer(char* name, char* description, char* location, char* city, char* phoneNumber, char* web);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_MANUFACTURER_H