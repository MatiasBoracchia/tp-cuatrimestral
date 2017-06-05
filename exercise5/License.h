//
// Created by Usuario on 26-May-17.
//
#include <stdlib.h>
#include "Customer.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_LICENSE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_LICENSE_H
typedef struct license License;
struct license{
    int licenseId;
    Customer* customer;
};
License* createLicense(int licenseId, Customer* customer);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_LICENSE_H
