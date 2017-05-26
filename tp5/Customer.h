//
// Created by Usuario on 26-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CUSTOMER_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CUSTOMER_H
typedef struct customer Customer;
struct customer{
    char name[15];
    char surname[15];
    int id;
    License* license;
};
void watchMovie();
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CUSTOMER_H
