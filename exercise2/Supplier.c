//
// Created by Usuario on 06-Jun-17.
//

#include "Supplier.h"
Supplier* createSupplier(char* CIF, char* name, char* telephone, char* fax, char* responsable, char* location, char* country, int maxAmountOfProducts){
    Supplier* supplier1 = malloc(sizeof(Supplier));
    supplier1->CIF = CIF;
    supplier1->name = name;
    supplier1->telephone = telephone;
    supplier1->fax = fax;
    supplier1->responsable = responsable;
    supplier1->location = location;
    supplier1->country = country;
    supplier1->maxAmountOfProducts = maxAmountOfProducts;
    supplier1->amountOfProducts = 0;
    supplier1->products = malloc(sizeof(Product*)* maxAmountOfProducts);
    return supplier1;
}
