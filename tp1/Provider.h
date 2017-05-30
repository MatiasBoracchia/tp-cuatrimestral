//
// Created by Usuario on 24-May-17.
//



#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H
#include "Electrodomestic.h"
typedef struct provider Provider;
struct provider{
    char* name;
    char* description;
    char* location;
    char* city;
    char* phoneNumber;
    char* web;
    Electrodomestic** products;
};
Provider* createProvider(char* name, char* description, char* location, char* city, char* phoneNumber, char* web, Electrodomestic** products);
void receiveProduct(Provider* provider, Electrodomestic** electrodomestic);
void providesProduct(Provider* provider, Electrodomestic** electrodomestic);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H




