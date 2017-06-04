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
void cartInfo(Cart* cart1){
    printf("Cart id: %d, total: %.2f \n",cart1->id, cart1->total);
    for (int i = 0; i < cart1->amountOfAppliances; ++i) {
        printf("Product: %d \t %s \n",i+1,cart1->appliances[i]->model);
    }
}