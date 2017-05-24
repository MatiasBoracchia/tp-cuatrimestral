//
// Created by Usuario on 24-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_ELECTRODOMESTIC_H

typedef struct electrodomestic Electrodomestic;
struct electrodomestic {
    char name[15];
    char model[15];
    float price;
};

void setPrice(Electrodomestic* electrodomestic , float newPrice);
void print(Electrodomestic* electrodomestic);

