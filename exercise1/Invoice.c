//
// Created by Usuario on 01-Jun-17.
//

#include "Invoice.h"

Invoice* createInvoice(int id, float futurePayment) {
    Invoice *invoice1 = malloc(sizeof(Invoice));
    invoice1->id = id;
    invoice1->futurePayment = futurePayment;
}

void payInvoice(Invoice* invoice1) {
    printf("Invoice was payed \n");
    invoice1->futurePayment = 0;
    //free(invoice1->id);
    //free(invoice1->futurePayment);
    //free(invoice1);
}