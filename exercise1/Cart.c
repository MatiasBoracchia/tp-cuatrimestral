//
// Created by Usuario on 30-May-17.
//

#include "Cart.h"

Cart* createCart(char* id,int maxAppliances) {
    Cart *result = malloc(sizeof(Cart));
    result->maxAppliances = maxAppliances;
    result->amountOfAppliances = 0;
    result->id = id;
    result->appliances = malloc(sizeof(Appliance*)* maxAppliances);
    
    return result;
}
Invoice* generateInvoice(Cart* cart){
    int* id = rand()%10000+1000;
    Invoice* invoice1 = createInvoice(id,cart->total);
    return invoice1;
}