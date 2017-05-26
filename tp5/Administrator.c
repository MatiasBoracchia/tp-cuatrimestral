//
// Created by Usuario on 26-May-17.
//

#include "Administrator.h"
#include "Customer.h"
#include <time.h>
#include <stdlib.h>

void registerCustomer(Administrator* admin, Customer* customer){
    admin->customer[admin->amountOfCustomers] = customer;
    int aux = admin->amountOfCustomers;
    admin->amountOfCustomers = aux+1;
}
License generateLicense(Administrator admin, Customer* customer){
    License license;
    int random = rand() % 1000;
    license.licenseId = random;
    strcpy(customer->license,&license);
    //client->license = &license;
    return license;
}
