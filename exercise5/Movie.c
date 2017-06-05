//
// Created by Usuario on 04-Jun-17.
//

#include "Movie.h"
Movie* createMovie(char* name, int year, int isNew){
    Movie* movie1 = malloc(sizeof(Movie*));
    movie1->name = name;
    movie1->isNew = isNew;
    movie1->year = year;
    movie1->status = "Available";
    return movie1;
}