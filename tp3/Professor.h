//
// Created by Usuario on 30-May-17.
//
#include "Person.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_PROFESSOR_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_PROFESSOR_H
typedef struct professor Professor;

struct professor{
    Person* person;
    int employeeNumber;
};

Professor* createProfessor(Person* person, int employeeNumber);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_PROFESSOR_H
