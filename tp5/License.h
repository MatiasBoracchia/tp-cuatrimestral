//
// Created by Usuario on 26-May-17.
//
#include <stdlib.h>
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_LICENSE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_LICENSE_H
typedef struct license License;
struct license{
    int licenseId;
};
License* createLicense(int licenseId);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_LICENSE_H
