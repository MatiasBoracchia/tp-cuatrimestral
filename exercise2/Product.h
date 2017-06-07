//
// Created by Usuario on 06-Jun-17.
//

#include <stdlib.h>

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PRODUCT_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PRODUCT_H

typedef struct product Product;
struct product {
    char *name;
    int id;
    float price;
    char *type;
};

Product* createProduct(char* name, int id, float price);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PRODUCT_H