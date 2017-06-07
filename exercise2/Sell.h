//
// Created by Usuario on 06-Jun-17.
//

#include <stdlib.h>
#include "Product.h"

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_SELL_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_SELL_H

typedef struct sell Sell;
struct sell {
    int id;
    char *sellDate;
    float totalPrice;
    int quantity;
    Product *product1;
    int discount;
};

Sell* createSell(char* sellDate, int quantity, Product* product1,int discount, int id);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_SELL_H