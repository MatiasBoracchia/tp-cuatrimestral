//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_SURPLUS_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_SURPLUS_H
typedef struct surplus Surplus;
struct surplus{
    char notReturnedMovies[20][15]; //list of movies not returned
    double amount;
    double moneyIn;
    char mostActiveClients[10][30];

};
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_SURPLUS_H
