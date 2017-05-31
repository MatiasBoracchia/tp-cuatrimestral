//
// Created by Usuario on 25-May-17.
//
#include "Provider.h"

void providesProduct(Provider* provider, Catalogue* catalogue, Appliance* appliance, int quantity){
    for (int i = 0; i < quantity ; ++i) {
        if(searchAppliance(provider,appliance)==1){

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
            return 1;
        }
    }
    return 0;
}
void reorder(Provider* provider, int position){
    if(provider->amountOfElectrodomestics != position){
        provider->products[position] = provider->products[provider->amountOfElectrodomestics-1];
        provider->amountOfElectrodomestics = provider->amountOfElectrodomestics -1;
    }


}