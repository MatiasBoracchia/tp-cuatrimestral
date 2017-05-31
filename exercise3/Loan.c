//
// Created by Usuario on 25-May-17.
//

#include "Loan.h"

double charge(Loan* loan){
    return loan->daysKept * loan->charge;
}
Loan* createLoan(char* code, char* exitDate, double charge, int daysKept){
    Loan* loan = malloc(sizeof(Loan));
    loan->charge=charge;
    loan->code = code;
    loan->daysKept=daysKept;
    loan->exitDate = exitDate;

    return loan;
}
