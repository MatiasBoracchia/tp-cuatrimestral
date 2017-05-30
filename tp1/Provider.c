//
// Created by Usuario on 25-May-17.
//
#include "Provider.h"

void receiveProduct(Provider* provider, Electrodomestic* electrodomestic){
    for (int i = 0; i < 20 ; ++i) {
        if(provider->products[i]==NULL){
            provider->products[i] = electrodomestic;
            break;
        }
    }
    return;
}
void providesProduct(Provider* provider, Electrodomestic* electrodomestic){
    for (int i = 0; i < 20 ; ++i) {
        if(provider->products[i]==electrodomestic){
            provider->products[i] =NULL ;
            break;
        }
    }
    return;
}

Provider* createProvider(char* name, char* description, char* location, char* city, char* phoneNumber, char* web, Electrodomestic** products){
    Provider* provider = malloc(sizeof(Provider));
    provider->web = web;
    provider->phoneNumber = phoneNumber;
    provider->location = location;
    provider->name = name;
    provider->city = city;
    provider->description =description;

    //falta products
}