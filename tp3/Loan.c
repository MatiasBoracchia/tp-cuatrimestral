//
// Created by Usuario on 25-May-17.
//

#include "Loan.h"

double charge(Loan* loan){
    return loan->daysKept * loan->charge;
}

