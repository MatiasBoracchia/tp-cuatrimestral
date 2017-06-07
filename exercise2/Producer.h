//
// Created by Usuario on 06-Jun-17.
//

#include "Supplier.h"
#include "Product.h"
#include <stdlib.h>

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PRODUCER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PRODUCER_H

typedef struct producer Producer;
struct producer {
    Product *productMade;
    char *name;
    int id;

};

Producer* createProducer(Product* productMade,char* name,int id);

void provideToSupplier(Producer* producer1, Supplier* supplier1, int quantity);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PRODUCER_H