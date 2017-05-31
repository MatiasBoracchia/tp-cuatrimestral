//
// Created by Usuario on 25-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_LOAN_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_LOAN_H

typedef struct loan Loan;
struct loan{
    char* code;
    char* exitDate;
    double charge;
    int daysKept;
};
Loan* createLoan(char* code, char* exitDate, double charge, int daysKept);
double charge(Loan* loan);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_LOAN_H
