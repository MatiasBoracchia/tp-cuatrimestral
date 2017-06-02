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
};
Shop* createShop(Catalogue* catalogue1, char* name);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_SHOP_H
