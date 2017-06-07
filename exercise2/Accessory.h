//
// Created by Usuario on 06-Jun-17.
//

#include <stdlib.h>
#include "Product.h"

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_ACCESSORY_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_ACCESSORY_H

typedef struct accessory Accessory;
struct accessory {
    Product *product;
    char *type;
    char *comment;
};

Accessory* createAccessory( Product* product,char* type,char* comment);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_ACCESSORY_H