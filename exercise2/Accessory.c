//
// Created by Usuario on 06-Jun-17.
//

#include "Accessory.h"

Accessory* createAccessory( Product* product,char* type,char* comment) {
    Accessory *accessory1 = malloc(sizeof(Accessory));
    accessory1->product = malloc(sizeof(Product));
    accessory1->comment = comment;
    accessory1->product = product;
    product->type = "Accessory";
    accessory1->type = type;
    return accessory1;
}