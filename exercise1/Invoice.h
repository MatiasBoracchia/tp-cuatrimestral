//
// Created by Usuario on 24-May-17.
//

#include <stdlib.h>

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H

typedef struct invoice Invoice;
struct invoice {
    int id;
    float futurePayment;
};

Invoice* createInvoice(int id, float futurePayment);

void payInvoice(Invoice* invoice1);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H