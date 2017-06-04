//
// Created by Usuario on 25-May-17.
//
#include <stdio.h>
#include <stdlib.h>
#include "Loan.h"
#include "Material.h"
#include "Book.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H
typedef struct person Person;
struct person{
    char* name;
    char* surname;
    char* mail;
    char* telephone;
    int numberOfBooks;
    double debt;
    Book** books;
    int maxNumberOfBooks;
    char* studentOrProfessor;

};
Person* createPerson(char* name, char* surname, char* mail, char* telephone, int maxNumberOfBooks);
Loan* takeMaterial(Person* person, Material* material, char* date);
void returnMaterial(Person* person, Material* material, Loan* loan, int daysKept);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H

