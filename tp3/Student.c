//
// Created by Usuario on 31-May-17.
//
#include "Student.h"

Student* createStudent(int id){
    Student* student1 = malloc(sizeof(Student));
    student1->id = id;

    return student1;
}
