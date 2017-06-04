//
// Created by Usuario on 04-Jun-17.
//

#include "Professor.h"

Professor* createProfessor( int employeeNumber, Person* person){
    Professor* professor1 = malloc(sizeof(Professor));
    professor1->employeeNumber = employeeNumber;
    professor1->person = malloc(sizeof(Person));
    professor1->person = person;
    person->studentOrProfessor = "Professor";
    return professor1;
}