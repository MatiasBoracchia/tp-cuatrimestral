//
// Created by Usuario on 31-May-17.
//

#include "License.h"

License* createLicense(int licenseId){
    License* license1 = malloc(sizeof(License));
    license1->licenseId = licenseId;
    return license1;
}