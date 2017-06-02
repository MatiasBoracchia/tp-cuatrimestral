//
// Created by Usuario on 24-May-17.
//




#include "Catalogue.h"
#include "Appliance.h"

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H

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
void providesProduct(Provider* provider, Catalogue* catalogue, Appliance* appliance, int quantity);

int searchAndRemoveAppliance(Provider* provider, Appliance* appliance);
void reorder(Provider* provider, int position);
int checkQuantity(Provider* provider1, Appliance* appliance1);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H




