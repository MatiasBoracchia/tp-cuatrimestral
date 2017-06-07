//
// Created by Usuario on 24-May-17.
//

#include "Catalogue.h"
#include "Appliance.h"
#include "Shop.h"

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H

typedef struct provider Provider;
struct provider {
    char *name;
    char *description;
    char *location;
    char *city;
    char *phoneNumber;
    char *web;

    Appliance **products;
    int amountOfElectrodomestics;
    int maxAmountofElectro;
};

Provider* createProvider(char* name, char* description, char* location, char* city, char* phoneNumber, char* web,int maxAmountOfElectro);

int searchAndRemoveAppliance(Provider* provider, Appliance* appliance);

void reorder(Provider* provider, int position);

int checkQuantity(Provider* provider1, Appliance* appliance1);

void supplyToShop(Provider* provider1, Shop* shop);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PROVIDER_H