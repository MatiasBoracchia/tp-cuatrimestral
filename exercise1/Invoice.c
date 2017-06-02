//
// Created by Usuario on 01-Jun-17.
//

#include "Invoice.h"

Invoice* createInvoice(int* id, float futurePayment){
    Invoice* invoice1 = malloc(sizeof(Invoice));
    invoice1->id = id;
    invoice1->futurePayment = futurePayment;
}
