//
// Created by Usuario on 25-May-17.
//

#include "Loan.h"
#include <stdio.h>
#include <stdlib.h>
double charge(Loan* loan){
    return loan->daysKept * loan->charge;
}

