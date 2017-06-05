//
// Created by Usuario on 26-May-17.
//
#include "Customer.h"
#include "Movie.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_RENT_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_RENT_H
typedef struct rent Rent;
struct rent{

    Movie** movies;
    char* name;
    int maxAmountOfMovies;
    int amountOfMovies;
};
Rent* createRent(char* name, int maxAmountOfMovies);
void rentMovie(Customer* customer, Rent* rent1,Movie* movie1);
void addMovie(Movie* movie1, Rent* rent1);
int checkForAvailability();
char checkNewMovies();
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_RENT_H
