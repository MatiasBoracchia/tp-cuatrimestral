//
// Created by Usuario on 24-May-17.
//



#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CART_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CART_H
#include "Invoice.h"
#include "Appliance.h"
typedef struct cart Cart;
struct cart{
    char* id;
    float total;
    Appliance** appliances;
    int amountOfAppliances;
    int maxAppliances;

};
Invoice* generateInvoice(Cart* cart);
Cart* createCart(char* id, float total, int maxAppliances);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CART_H



