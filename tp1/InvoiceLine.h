//
// Created by Usuario on 24-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_INVOICELINE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_INVOICELINE_H
typedef struct invoiceLine InvoiceLine;
struct invoiceLine{
    char id[10];
    char product[15];
    int amount;
};
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_INVOICELINE_H

