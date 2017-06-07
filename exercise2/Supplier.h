//
// Created by Usuario on 06-Jun-17.
//
#include <stdlib.h>
#include "Product.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_SUPPLIER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_SUPPLIER_H
typedef struct supplier Supplier;
struct supplier{
    char* CIF;
    char* name;
    char* telephone;
    char* fax;
    char* responsable;
    char* location;
    char* country;
    Product** products;
    int maxAmountOfProducts;
    int amountOfProducts;
};
Supplier* createSupplier(char* CIF, char* name, char* telephone, char* fax, char* responsable, char* location, char* country, int maxAmountOfProducts);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_SUPPLIER_H
