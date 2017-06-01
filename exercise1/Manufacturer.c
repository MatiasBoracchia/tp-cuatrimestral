//
// Created by Usuario on 25-May-17.
//

#include <stdio.h>
#include "Manufacturer.h"

Manufacturer* createManufacturer(char* name, char* description, char* location, char* city, char* phoneNumber, char* web, Appliance* applianceProduced){
    Manufacturer* manufacturer = malloc(sizeof(Manufacturer));
    manufacturer->name = name;
    manufacturer->city = city;
    manufacturer->description = description;
    manufacturer->location = location;
    manufacturer->phoneNumber = phoneNumber;
    manufacturer->web = web;

    manufacturer->applianceProduced = malloc(sizeof(Appliance));
    manufacturer->applianceProduced = applianceProduced;

    return manufacturer;
}

void supply(Manufacturer* manufacturer, Provider* provider, int quantity){
    for (int i = 0; i < quantity ; ++i) {
        Appliance* appliance1 = createAppliance( manufacturer->applianceProduced->name,manufacturer->applianceProduced->model,manufacturer->applianceProduced->price);
        appliance1->tag = manufacturer->applianceProduced->tag;
        appliance1->model = manufacturer->applianceProduced->model;
        appliance1->name = manufacturer->applianceProduced->name;
        appliance1->price = manufacturer->applianceProduced->price;
        if(provider->amountOfElectrodomestics<provider->maxAmountofElectro){
            provider->products[provider->amountOfElectrodomestics] = appliance1;
            provider->amountOfElectrodomestics = provider->amountOfElectrodomestics + 1;
        }
    }
}