//
// Created by Usuario on 01-Jun-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_SHOP_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_SHOP_H
#include "Catalogue.h"
#include <stdlib.h>
typedef struct shop Shop;
struct shop{
    char* name;
    Catalogue* shopCatalogue;
    float moneyEarned;
    int productsSoled;
};
Shop* createShop(Catalogue* catalogue1, char* name);
void addToCart(Shop* shop1, Cart* cart1, Appliance* appliance1,int quantity);
int hasStock(Shop* shop1, Appliance* appliance1);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_SHOP_H
