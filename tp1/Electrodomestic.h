//
// Created by Usuario on 24-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H
#include <stdio.h>
#include "Manufacturer.h"

typedef struct electrodomestic Electrodomestic;
struct electrodomestic {
    char name[15];
    char model[15];
    float price;
    Manufacturer manufacturer1;
};

void setPrice(Electrodomestic* electrodomestic , float newPrice);


#endif //TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H




