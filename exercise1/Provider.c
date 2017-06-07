//
// Created by Usuario on 25-May-17.
//
#include "Provider.h"

Provider* createProvider(char* name, char* description, char* location, char* city, char* phoneNumber, char* web, int maxAmountOfElectro) {
    Provider *provider = malloc(sizeof(Provider));
    provider->web = web;
    provider->phoneNumber = phoneNumber;
    provider->location = location;
    provider->name = name;
    provider->city = city;
    provider->description = description;
    provider->maxAmountofElectro = maxAmountOfElectro;
    provider->products = malloc(sizeof(Appliance *) * maxAmountOfElectro);
    return provider;
}

int searchAndRemoveAppliance(Provider* provider, Appliance* appliance) {
    for (int i = 0; i < provider->amountOfElectrodomestics; ++i) {
        if (provider->products[i]->model = appliance->model) {
            destroyAppliance(provider->products[i]);
            reorder(provider, i);
            return i;
        }
    }
}

void reorder(Provider* provider, int position) {
    for (int i = position; i < provider->amountOfElectrodomestics - 1; ++i) {
        provider->products[i] = provider->products[i + 1];
    }
    provider->amountOfElectrodomestics = provider->amountOfElectrodomestics - 1;
}

int checkQuantity(Provider* provider1, Appliance* appliance1) {
    int aux = 0;
    for (int i = 0; i < provider1->amountOfElectrodomestics; ++i) {
        if (provider1->products[i]->model == appliance1->model) {
            aux = aux + 1;
        }
    }
    return aux;
}

void supplyToShop(Provider* provider1, Shop* shop) {
    if (provider1->amountOfElectrodomestics > shop->shopCatalogue->maxAmountOfElectrodomestics) {
        printf("can not do \n");
    } else {
        for (int i = 0; i < provider1->amountOfElectrodomestics; ++i) {
            //printf("The product %d is: %s \n",i, provider1->products[i]->model);
            shop->shopCatalogue->products[shop->shopCatalogue->amountOfElectrodomestics + i] = provider1->products[i];
            //free(provider1->products[i]);
        }
        shop->shopCatalogue->amountOfElectrodomestics =
                shop->shopCatalogue->amountOfElectrodomestics + provider1->amountOfElectrodomestics;
        //int aux = provider1->amountOfElectrodomestics;
        provider1->amountOfElectrodomestics = 0;
        //for (int j = 0; j < aux; ++j) {
            //free(provider1->products[j]);
        //}
    }
}
