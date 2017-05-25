//
// Created by Usuario on 25-May-17.
//

#include "Person.h"

void takeMaterial(Person* person, Material* material, Loan* loan, char date[10]){
    int aux = person->numberOfBooks;
    person->numberOfBooks = aux++;
    strcpy(material->status, "taken");
    strcpy(loan->exitDate, date);
    return;
}
void returnMaterial(Person* person, Material* material, Loan* loan, int daysKept){
    strcpy(material->status, "available");
    if(person->numberOfBooks >0){
        person->numberOfBooks--;
    }//else error
    loan->daysKept = daysKept;
    double debt = charge(loan);
    person->debt += debt;
    return;
}
