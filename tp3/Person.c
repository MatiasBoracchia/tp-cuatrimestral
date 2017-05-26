//
// Created by Usuario on 25-May-17.
//


#include "Person.h"

#include <stdio.h>
#include <stdlib.h>
void takeMaterial(Person* person, Material* material, Loan* loan, char date[10]){
    int aux = person->numberOfBooks;
    aux++;
    person->numberOfBooks = aux;
    strcpy(material->status, "taken");
    strcpy(loan->exitDate, date);

}
void returnMaterial(Person* person, Material* material, Loan* loan, int daysKept){
    strcpy(material->status, "available");
    if(person->numberOfBooks >0){
        person->numberOfBooks--;
    }//else error
    loan->daysKept = daysKept;
    double debt = charge(loan);
    double actualDebt = person->debt;
    double sum = actualDebt+debt;
    person->debt = sum;

}
