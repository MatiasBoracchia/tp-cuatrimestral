//
// Created by Usuario on 26-May-17.
//
#include "Movie.h"
#include "License.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CUSTOMER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CUSTOMER_H
typedef struct customer Customer;
struct customer{
    char* name;
    char* surname;
    int id;
    Movie** rentedMOvies;
    int maxAmountOfRentedMovies;
    int amountOfRentedMOvies;

};
Customer* createCustomer(char* name, char* surname, int id, int amountOfRentedMOvies);
void watchMovie();
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CUSTOMER_H
