//
// Created by Usuario on 25-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H
#include "Loan.h"
#include "Material.h"
#include <stdio.h>
#include <stdlib.h>
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

typedef struct student Student;

struct student{
    Person person;
    int id;
};

typedef struct professor Professor;

struct professor{
    Person person;
    int employeeNumber;
};


void takeMaterial(Person* person, Material* material, Loan* loan, char date[10]);
void returnMaterial(Person* person, Material* material, Loan* loan, int daysKept);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PERSON_H

