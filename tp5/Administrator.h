//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_ADMINISTRATOR_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_ADMINISTRATOR_H


#include "License.h"
#include "Customer.h"
typedef struct administrator Administrator;
struct administrator{
    char name[15];
    char surname[15];
    int id;
    Customer* customer[50];
    int amountOfCustomers;
};
void registerCustomer(Administrator* admin, Customer* customer);
License generateLicense(Administrator admin, Customer* customer);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_ADMINISTRATOR_H
