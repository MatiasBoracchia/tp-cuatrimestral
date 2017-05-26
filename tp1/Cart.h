//
// Created by Usuario on 24-May-17.
//



#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CART_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CART_H
#include "CartLine.h"
#include "Invoice.h"
typedef struct cart Cart;
struct cart{
    char id[10];
    float total;
    CartLine products[20]; //max is 20
};

float calculateTotal(Cart* cart);
Invoice* generateInvoice(Cart* cart);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CART_H



