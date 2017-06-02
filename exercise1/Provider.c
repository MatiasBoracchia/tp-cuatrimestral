//
// Created by Usuario on 25-May-17.
//
#include "Provider.h"

void providesProduct(Provider* provider, Catalogue* catalogue, Appliance* appliance, int quantity){
    for (int i = 0; i < quantity ; ++i) {
        if(checkQuantity(provider,appliance)>=quantity){
            i = searchAndRemoveAppliance(provider,appliance)-1;
        }else{
            printf("The quantity asked is bigger than the products in stock");
            return;
        }
    }
}


Provider* createProvider(char* name, char* description, char* location, char* city, char* phoneNumber, char* web, int maxAmountOfElectro){
    Provider* provider = malloc(sizeof(Provider));
    provider->web = web;
    provider->phoneNumber = phoneNumber;
    provider->location = location;
    provider->name = name;
    provider->city = city;
    provider->description =description;
    provider->maxAmountofElectro = maxAmountOfElectro;

    provider->products = malloc(sizeof(Appliance*)*maxAmountOfElectro);

    return provider;
}

int searchAndRemoveAppliance(Provider* provider, Appliance* appliance){
    for (int i = 0; i < provider->amountOfElectrodomestics; ++i) {
        if(provider->products[i]->model = appliance->model){
            free(provider->products[i]);
            reorder(provider,i);
            return i;
        }
    }
}
void reorder(Provider* provider, int position){
    if(provider->amountOfElectrodomestics != position){
        provider->products[position] = provider->products[provider->amountOfElectrodomestics-1];
        provider->amountOfElectrodomestics = provider->amountOfElectrodomestics -1;
    }
}
int checkQuantity(Provider* provider1, Appliance* appliance1){
    int aux = 0;
    for (int i = 0; i < provider1->amountOfElectrodomestics ; ++i) {
        if(provider1->products[i]->model == appliance1->model){
            aux = aux + 1;
        }
    }
    return aux;
}
void supplyToShop(Provider* provider1, Shop* shop){
    if(provider1->amountOfElectrodomestics > shop->shopCatalogue->maxAmountOfElectrodomestics){
        printf("can not do \n");
    }else{
        shop->shopCatalogue->products = provider1->products;
        removeApplances(provider1);
    }
}
void removeApplances(Provider* provider1){
    for (int i = 0; i < provider1->amountOfElectrodomestics; ++i) {
        free(provider1->products[i]);
    }
    provider1->amountOfElectrodomestics = 0;
}