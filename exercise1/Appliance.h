//
// Created by Usuario on 01-Jun-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_APPLIANCE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_APPLIANCE_H
#include <stdio.h>
#include <stdlib.h>
typedef struct appliance Appliance;
struct appliance{
    char* name;
    char* model;
    float price;
    int tag;
};
Appliance* createAppliance(char* name, char* model, float price);
void setPrice(Appliance* electrodomestic , float newPrice);
void destroyAppliance(Appliance* appliance1);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_APPLIANCE_H
