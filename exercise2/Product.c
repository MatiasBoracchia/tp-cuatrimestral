//
// Created by Usuario on 06-Jun-17.
//

#include "Product.h"

Product* createProduct(char* name, int id, float price) {
    Product *product1 = malloc(sizeof(Product));
    product1->name = name;
    product1->id = id;
    product1->price = price;
    return product1;
}