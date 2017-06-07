//
// Created by Usuario on 24-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CART_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CART_H

#include "Invoice.h"
#include "Appliance.h"

typedef struct cart Cart;
struct cart {
    int id;
    float total;
    Appliance **appliances;
    int amountOfAppliances;
    int maxAppliances;
    int purchasesMade;

};

Invoice* generateInvoice(Cart* cart);

Cart* createCart(int id, int maxAppliances);

void cartInfo(Cart* cart1);

void emptyCart(Cart* cart1);

Invoice* buyAppliances(Cart* cart1);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CART_H