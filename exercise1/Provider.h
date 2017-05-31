//
// Created by Usuario on 24-May-17.
//



#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H
#include "Appliance.h"
typedef struct provider Provider;
struct provider{
    char* name;
    char* description;
    char* location;
    char* city;
    char* phoneNumber;
    char* web;
    Appliance** products;
    int amountOfElectrodomestics;
    int maxAmountofElectro;
};
Provider* createProvider(char* name, char* description, char* location, char* city, char* phoneNumber, char* web,int maxAmountOfElectro);
void providesProduct(Provider* provider, Catalogue* catalogue);
Appliance* searchAppliance(Provider* provider, Appliance* appliance);
void reorder(Provider* provider, int position);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H




