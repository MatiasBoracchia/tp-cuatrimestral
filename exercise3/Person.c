//
// Created by Usuario on 25-May-17.
//

#include "Person.h"

Loan* takeMaterial(Person* person, Material* material, char* date) {
    person->numberOfBooks = person->numberOfBooks + 1;
    material->status = "Taken";
    int code = person->loanedBooks;
    Loan *loan1 = createLoan(code, date, 20);
    person->loanedBooks++;
    return loan1;
}

void returnMaterial(Person* person, Material* material, Loan* loan, int daysKept) {
    material->status = "Available";
    if (person->numberOfBooks > 0) {
        person->numberOfBooks = person->numberOfBooks - 1;
    } //else error
    loan->daysKept = daysKept;
    double charge1 = charge(loan);
    person->debt = person->debt + charge1;
}

Person* createPerson(char* name, char* surname, char* mail, char* telephone, int maxNumberOfBooks) {
    Person *person1 = malloc(sizeof(Person));
    person1->name = name;
    person1->surname = surname;
    person1->mail = mail;
    person1->telephone = telephone;
    person1->debt = 0.0;
    person1->numberOfBooks = 0;
    person1->maxNumberOfBooks = maxNumberOfBooks;
    person1->loanedBooks = 0;
    person1->books = malloc(sizeof(Book *) * maxNumberOfBooks);
    person1->studentOrProfessor = "Not Defined";
    return person1;
}