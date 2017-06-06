//
// Created by Franco on 25-May-17.
//
#include "Appliance.h"
#include <stdio.h>

void setPrice(Appliance* electrodomestic , float newPrice){
    electrodomestic->price = newPrice;
}

Appliance* createAppliance(char* name, char* model, float price){
    Appliance* appliance1 = malloc(sizeof(Appliance));
    appliance1->name = name;
    appliance1->model = model;
    appliance1->price = price;

    return appliance1;
}
void destroyAppliance(Appliance* appliance1){
    free(appliance1->name);
    free(appliance1->model);
    free(appliance1->tag);
    free(appliance1);
}
