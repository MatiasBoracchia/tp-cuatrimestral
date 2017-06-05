//
// Created by Usuario on 26-May-17.
//

#include "Customer.h"

Customer* createCustomer(char* name, char* surname, int id, int maxAmountOfRentedMovies){
    Customer* customer = malloc(sizeof(Customer));
    customer->name = name;
    customer->surname = surname;
    customer->id = id;
    customer->rentedMOvies = malloc(sizeof(Movie*)*maxAmountOfRentedMovies);
    customer->maxAmountOfRentedMovies = maxAmountOfRentedMovies;
    customer->amountOfRentedMOvies = 0;

    return customer;
}