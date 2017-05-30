//
// Created by Usuario on 25-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H
#include "Loan.h"
#include "Material.h"
typedef struct person Person;

struct person{
    char* type;
    char* name;
    char* surname;
    char* mail;
    char * telephone;
    int numberOfBooks;
    double debt;
};






void takeMaterial(Person* person, Material* material, Loan* loan, char* date);
void returnMaterial(Person* person, Material* material, Loan* loan, int daysKept);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H

