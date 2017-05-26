//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_RENT_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_RENT_H
typedef struct rent Rent;
struct rent{
    char movieName[15];
    int clientId;
    char dateRented[10];
    int daysKept;
};
void rentMovie();
int checkForAvailability();
char checkNewMovies();
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_RENT_H
