//
// Created by Usuario on 24-May-17.
//



#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CATALOGUE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CATALOGUE_H
#include "Electrodomestic.h"
typedef struct catalogue Catalogue;
struct catalogue{
    char id[10];
    char name[20];
    int discount;
    Electrodomestic products[20];
};

void setDiscount(Catalogue* catalogue, int discount);
float calculatePriceWithDiscount(Catalogue* catalogue, Electrodomestic* electrodomestic);
void addToCatalogue(Catalogue* catalogue, Electrodomestic* electrodomestic);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CATALOGUE_H


