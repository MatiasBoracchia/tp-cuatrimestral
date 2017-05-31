//
// Created by Usuario on 25-May-17.
//


#include "Person.h"

#include <stdio.h>
#include <stdlib.h>
void takeMaterial(Person* person, Material* material, Loan* loan, char date[10]){
    person->numberOfBooks = person->numberOfBooks +1;
    material->status = "taken";
    loan->exitDate = date;

}
void returnMaterial(Person* person, Material* material, Loan* loan, int daysKept){
    material->status = "available";
    if(person->numberOfBooks >0){
        person->numberOfBooks = person->numberOfBooks-1;
    }//else error
    loan->daysKept = daysKept;
    double debt = charge(loan);
    double actualDebt = person->debt;
    double sum = actualDebt+debt;
    person->debt = sum;

}
Person* createPerson(char* type, char* name, char* surname, char* mail, char* telephone, int numberOfBooks, double debt, Student* student, Professor* professor){
    Person* person1 = malloc(sizeof(Person));
    person1->type = type;
    person1->name = name;
    person1->surname = surname;
    person1->mail = mail;
    person1->telephone = telephone;
    person1->numberOfBooks = numberOfBooks;
    person1->debt = debt;
    if(student==NULL){
        person1->professor = malloc(sizeof(Professor));
        person1->professor = professor;
    }
    if(professor==NULL){
        person1->student = malloc(sizeof(Student));
        person1->student = student;
    }

    return person1;
}
