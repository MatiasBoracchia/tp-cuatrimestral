//
// Created by Franco on 25-May-17.
//
#include "Electrodomestic.h"
#include <libintl.h>
#include <stdio.h>
#include <malloc.h>

void setPrice(Electrodomestic* electrodomestic , float newPrice){
    electrodomestic->price = newPrice;
}

Electrodomestic* createElectrodomestic(char* name, char* model, float price, Manufacturer* manufacturer){
    Electrodomestic* electrodomestic = malloc(sizeof(Electrodomestic));
    electrodomestic->name = name;
    electrodomestic->model = model;
    electrodomestic->price = price;

    electrodomestic->manufacturer = malloc(sizeof(Manufacturer));
    electrodomestic->manufacturer = manufacturer;

    return electrodomestic;
}
