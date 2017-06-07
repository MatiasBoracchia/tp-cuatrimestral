//
// Created by Usuario on 25-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_LOAN_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_LOAN_H

typedef struct loan Loan;
struct loan {
    int code;
    char *exitDate;
    double charge;
    int daysKept;
};

Loan* createLoan(int code, char* exitDate, double charge);

double charge(Loan* loan);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_LOAN_H