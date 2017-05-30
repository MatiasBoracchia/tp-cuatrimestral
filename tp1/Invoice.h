//
// Created by Usuario on 24-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H

typedef struct invoice Invoice;
struct invoice{
    char* id;
    float futurePayment;
};

Invoice* createInvoice(char* id, float futurePayment);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_INVOICE_H


