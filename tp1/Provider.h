//
// Created by Usuario on 24-May-17.
//



#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H
#include "Electrodomestic.h"
typedef struct provider Provider;
struct provider{
    char name[15];
    char description[140];
    char location[30];
    char city[20];
    char phoneNumber[15];
    char web[40];
    Electrodomestic products[20];

};

void receiveProduct(Provider* provider, Electrodomestic* electrodomestic);
void providesProduct(Provider* provider, Electrodomestic* electrodomestic);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H




