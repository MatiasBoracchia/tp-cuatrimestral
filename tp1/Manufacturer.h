//
// Created by Usuario on 24-May-17.
//

#include "Electrodomestic.h"

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_MANUFACTURER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_MANUFACTURER_H

typedef struct manufacturer Manufacturer;

struct manufacturer{
    char name[10];
    char description[140];
    char location[30];
    char city[20];
    char phoneNumber[15];
    char web[40];
};


#endif //TP_CUATRIMESTRAL_INDIVIDUAL_MANUFACTURER_H