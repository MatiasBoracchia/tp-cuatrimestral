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
void rentMovie(Customer * customer1, Rent* rent1, Movie* movie){
    for (int i = 0; i < rent1->amountOfMovies; ++i) {
        if(rent1->movies[i]->name == movie->name && rent1->movies[i]->status != "Rented"){
            rent1->movies[i]->status = "Rented";
            break;
        }
    }
    customer1->rentedMOvies[customer1->amountOfRentedMOvies] = movie;
    customer1->amountOfRentedMOvies = customer1->amountOfRentedMOvies +1;

}
void addMovie(Movie* movie1, Rent* rent1){
    rent1->movies[rent1->amountOfMovies]=movie1;
    rent1->amountOfMovies = rent1->amountOfMovies +1;
}
void rentInformation(Rent* rent1){
    for (int i = 0; i < rent1->amountOfMovies; ++i) {
        printf("Movie: %s is %s\n",rent1->movies[i]->name,rent1->movies[i]->status);

    }
}
int availableMovies(Rent* rent){
    int aux = 0;
    printf("Available movies: \n");
    for (int i = 0; i < rent->amountOfMovies; ++i) {
        if(rent->movies[i]->status == "Available"){
            aux = aux + 1;
            printf("%s \n",rent->movies[i]->name);
        }
    }
}
int moviePremieres(Rent* rent1){
    int aux = 0;
    printf("Movie premieres: \n");
    for (int i = 0; i < rent1->amountOfMovies; ++i) {
        if(rent1->movies[i]->isNew==1){
            aux = aux +1;
            printf("%s \n",rent1->movies[i]->name);
        }
    }
    return aux;
}