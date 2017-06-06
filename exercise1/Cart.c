//
// Created by Usuario on 30-May-17.
//

#include "Cart.h"

Cart* createCart(int id,int maxAppliances) {
    Cart *result = malloc(sizeof(Cart));
    result->maxAppliances = maxAppliances;
    result->amountOfAppliances = 0;
    result->id = id;
    result->appliances = malloc(sizeof(Appliance*)* maxAppliances);
    
    return result;
}
Invoice* generateInvoice(Cart* cart){
    int id = (int)(rand()%10000+1000);
    Invoice* invoice1 = createInvoice(id,cart->total);
    return invoice1;
}
void cartInfo(Cart* cart1){
    printf("Cart id: %d, total: %.2f \n",cart1->id, cart1->total);
    for (int i = 0; i < cart1->amountOfAppliances; ++i) {
        printf("Product: %d \t %s \n",i,cart1->appliances[i]->model);
    }
}
void emptyCart(Cart* cart1){
    for (int i = 0; i < cart1->amountOfAppliances; ++i) {
        destroyAppliance(cart1->appliances[i]);
        free(cart1->appliances);
        realloc(cart1->appliances, sizeof(Appliance*)*cart1->maxAppliances);

    }
    cart1->amountOfAppliances = 0;
}
Invoice* buyAppliances(Cart* cart1){
    Invoice* invoice1 = createInvoice(cart1.id,cart1->total);
    emptyCart(cart1);
}