//
// Created by Usuario on 30-May-17.
//
#include <stdlib.h>
#include "Person.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_STUDENT_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_STUDENT_H
typedef struct student Student;

struct student{
    int id;
};

Student* createStudent(int id);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_STUDENT_H
