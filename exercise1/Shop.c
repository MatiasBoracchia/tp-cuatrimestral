//
// Created by Usuario on 01-Jun-17.
//

#include "Shop.h"

Shop* createShop(Catalogue* catalogue1, char* name){
    Shop* shop1 = malloc(sizeof(Shop));
    shop1->shopCatalogue = malloc(sizeof(Catalogue));
    shop1->shopCatalogue = catalogue1;
    shop1->name = name;

    return shop1;
}