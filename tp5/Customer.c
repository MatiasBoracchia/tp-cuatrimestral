//
// Created by Usuario on 26-May-17.
//

#include "Customer.h"

Customer* createCustomer(char* name, char* surname, int id, License* license){
    Customer* customer = malloc(sizeof(Customer));
    customer->name = name;
    customer->surname = surname;
    customer->id = id;

    customer->license = malloc(sizeof(License));
    customer->license = license;

    return customer;
}