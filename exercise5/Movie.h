//
// Created by Usuario on 04-Jun-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_MOVIE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_MOVIE_H
typedef struct movie Movie;
struct movie{
    char* name;
    int year;
    int isNew;
    char* status;
};
Movie* createMovie(char* name, int year, int isNew);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_MOVIE_H
