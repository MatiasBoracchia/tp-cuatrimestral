//
// Created by Usuario on 24-May-17.
//



#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CATALOGUE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CATALOGUE_H
#include "Appliance.h"
#include "Cart.h"
typedef struct catalogue Catalogue;
struct catalogue{
    char* id;
    char* name;
    int discount;
    Appliance** products;
    int amountOfElectrodomestics;
    int maxAmountOfElectrodomestics;
};
Catalogue* createCatalogue(char* id, char* name,int discount,int maxAmountOfElectrodomestics);
void setDiscount(Catalogue* catalogue, int discount);
float calculatePriceWithDiscount(Catalogue* catalogue, Appliance* electrodomestic);
void addToCatalogue(Catalogue* catalogue, Appliance* electrodomestic);
void addToCart(Catalogue* catalogue,Cart* cart, int numberOnTheCatalogue);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CATALOGUE_H


