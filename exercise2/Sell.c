//
// Created by Usuario on 06-Jun-17.
//

#include "Sell.h"

Sell* createSell(char* sellDate, int quantity, Product* product1,int discount, int id){
    Sell* sell1 = malloc(sizeof(Sell));
    sell1->sellDate = sellDate;
    sell1->quantity = quantity;
    sell1->product1 = malloc(sizeof(Product));
    sell1->product1 = product1;
    sell1->discount = discount;
    sell1->id = id;
    sell1->totalPrice = (float)quantity * product1->price;
    return sell1;
}