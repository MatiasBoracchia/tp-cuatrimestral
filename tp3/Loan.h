//
// Created by Usuario on 25-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_LOAN_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_LOAN_H
typedef struct loan{
    double charge;
    char code[10];
    char exitDate[10];
    int daysKept;
}Loan;

double charge(Loan* loan);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_LOAN_H
