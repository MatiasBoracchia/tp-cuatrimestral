//
// Created by Usuario on 25-May-17.
//
#include "Provider.h"

void receiveProduct(Provider* provider, Electrodomestic* electrodomestic){
    if(provider->amountOfElectrodomestics<provider->maxAmountofElectro){
        provider->products[provider->amountOfElectrodomestics] = electrodomestic;
        provider->amountOfElectrodomestics = provider->amountOfElectrodomestics +1;
    }
}
Electrodomestic* providesProduct(Provider* provider, Electrodomestic* electrodomestic){
    Electrodomestic* result;
    if(provider->amountOfElectrodomestics > 0){
        result = provider->products[provider->amountOfElectrodomestics];
        provider->amountOfElectrodomestics = provider->amountOfElectrodomestics -1;
    }
    return result;
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

    provider->products = malloc(sizeof(Electrodomestic*)*maxAmountOfElectro);

    return provider;

    //falta products
}