//
// Created by Usuario on 26-May-17.
//


#include "License.h"
#include "Customer.h"

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_ADMINISTRATOR_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_ADMINISTRATOR_H

typedef struct administrator Administrator;
struct administrator{
    char* name;
    char* surname;
    Customer** customers;
    int id;
    int amountOfCustomers;
    int maxCustomers;
    int totalMoney;
    int costOfRent;
};
Administrator* createAdmin(char* name, char* surname, int id, int maxCustomers);
void registerCustomer(Administrator* admin, Customer* customer);
License generateLicense(Administrator admin, Customer* customer);
int checkForCustomer(Administrator* admin, Customer* customer);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_ADMINISTRATOR_H
