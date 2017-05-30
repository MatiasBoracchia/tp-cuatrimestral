//
// Created by Usuario on 30-May-17.
//
#include "Person.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_STUDENT_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_STUDENT_H
typedef struct student Student;

struct student{
    Person* person;
    int id;
};

Student* createStudent(Person* person, int id);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_STUDENT_H
