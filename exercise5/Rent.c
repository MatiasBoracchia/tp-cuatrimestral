//
// Created by Usuario on 04-Jun-17.
//

#include "Rent.h"
Rent* createRent(char* name, int maxAmountOfMovies){
    Rent* rent1 = malloc(sizeof(Rent));
    rent1->maxAmountOfMovies = maxAmountOfMovies;
    rent1->movies = malloc(sizeof(Movie*)*maxAmountOfMovies);
    rent1->amountOfMovies = 0;
    rent1->name = name;

    return rent1;
}
void rentMovie(Customer * customer1, Rent* rent1, Movie* movie1){
    for (int i = 0; i < rent1->amountOfMovies; ++i) {
        if(movie1->name = rent1->movies[i]->name){
            rent1->movies[i]->name = "Rented";
            break;
        }
    }
    customer1->rentedMOvies[customer1->amountOfRentedMOvies] = movie1;

}
void addMovie(Movie* movie1, Rent* rent1){
    rent1->movies[rent1->amountOfMovies]=movie1;
}
