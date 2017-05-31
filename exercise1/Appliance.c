//
// Created by Franco on 25-May-17.
//
#include "Appliance.h"
#include <stdio.h>

void setPrice(Appliance* electrodomestic , float newPrice){
    electrodomestic->price = newPrice;
}

Appliance* createElectrodomestic(char* name, char* model, float price, Manufacturer* manufacturer){
    Appliance* electrodomestic = malloc(sizeof(Appliance));
    electrodomestic->name = name;
    electrodomestic->model = model;
    electrodomestic->price = price;

    electrodomestic->manufacturer = malloc(sizeof(Manufacturer));
    electrodomestic->manufacturer = manufacturer;

    return electrodomestic;
}
