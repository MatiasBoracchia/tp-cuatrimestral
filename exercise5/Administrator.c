//
// Created by Usuario on 26-May-17.
//

#include "Administrator.h"
#include "Customer.h"
#include <time.h>
#include <stdlib.h>

void registerCustomer(Administrator* admin, Customer* customer){
    if(admin->amountOfCustomers<admin->maxCustomers){
        admin->customers[admin->amountOfCustomers] = customer;
        int aux = admin->amountOfCustomers;
        admin->amountOfCustomers = aux+1;
    } else{
        printf("CANNOT REGISTER MORE CUSTOMERS");
    }

}
/*License generateLicense(Administrator* admin, Customer* customer){
    License license;
    int random = rand() % 1000;
    license.licenseId = random;
    strcpy(customer->license,&license);
    //client->license = &license;
    return license;
}*/

Administrator* createAdmin(char* name, char* surname, int id, int maxCustomers){
    Administrator* admin = malloc(sizeof(Administrator));
    admin->name = name;
    admin->amountOfCustomers = 0;
    admin->maxCustomers = maxCustomers;
    admin->id = id;
    admin->surname = surname;

    admin->customers = malloc(sizeof(Customer*)*maxCustomers);

    return admin;
}
