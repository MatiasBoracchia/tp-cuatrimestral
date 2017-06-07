//
// Created by Usuario on 25-May-17.
//

#include "Loan.h"

double charge(Loan* loan) {
    double aux = loan->daysKept * loan->charge;
    return aux;
}

Loan* createLoan(int code, char* exitDate, double charge) {
    Loan *loan = malloc(sizeof(Loan));
    loan->charge = charge;
    loan->code = code;
    loan->daysKept = 0;
    loan->exitDate = exitDate;
    return loan;
}
