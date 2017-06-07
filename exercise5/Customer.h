//
// Created by Usuario on 26-May-17.
//

#include "Movie.h"

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CUSTOMER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CUSTOMER_H

typedef struct customer Customer;
struct customer {
    char *name;
    char *surname;
    int id;
    Movie **rentedMOvies;
    int maxAmountOfRentedMovies;
    int amountOfRentedMOvies;
};

Customer* createCustomer(char* name, char* surname, int id, int amountOfRentedMOvies);

void moviesRented(Customer* customer1);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CUSTOMER_H
