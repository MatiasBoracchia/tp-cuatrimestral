//
// Created by Usuario on 25-May-17.
//
#include "Material.h"
#include "Loan.h"
#include <stdio.h>
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H
typedef struct person Person;

struct person{
    char type[10];
    char name[20];
    char surname[20];
    char mail[30];
    char telephone[15];
    int numberOfBooks;
    double debt;
};

void takeMaterial(Person* person, Material* material, Loan* loan, char date[10]);
void returnMaterial(Person* person, Material* material, Loan* loan, int daysKept);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H

