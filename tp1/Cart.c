//
// Created by Usuario on 30-May-17.
//

#include "Cart.h"

Cart* createCart(char* id, float total){
    Cart* result= malloc(sizeof(Cart));

    result->id=id;
    result->total=total;


    return result;
}