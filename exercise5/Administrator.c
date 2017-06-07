//
// Created by Usuario on 26-May-17.
//

#include "Administrator.h"
#include "Customer.h"
#include <time.h>
#include <stdlib.h>

void registerCustomer(Administrator* admin, Customer* customer) {
    if (admin->amountOfCustomers < admin->maxCustomers) {
        admin->customers[admin->amountOfCustomers] = customer;
        int aux = admin->amountOfCustomers;
        admin->amountOfCustomers = aux + 1;
    } else {
        printf("CANNOT REGISTER MORE CUSTOMERS");
    }
}

Administrator* createAdmin(char* name, char* surname, int id, int maxCustomers) {
    Administrator *admin = malloc(sizeof(Administrator));
    admin->name = name;
    admin->amountOfCustomers = 0;
    admin->maxCustomers = maxCustomers;
    admin->id = id;
    admin->surname = surname;
    admin->costOfRent = 10;
    admin->customers = malloc(sizeof(Customer *) * maxCustomers);
    return admin;
}

int checkForCustomer(Administrator* admin, Customer* customer) {
    for (int i = 0; i < admin->amountOfCustomers; ++i) {
        if (admin->customers[i]->surname == customer->surname && admin->customers[i]->name == customer->name) {
            return 1;
        }
    }
    return 0;
}
