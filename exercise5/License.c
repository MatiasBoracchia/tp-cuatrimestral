//
// Created by Usuario on 31-May-17.
//

#include "License.h"

License* createLicense(int licenseId, Customer* customer) {
    License *license1 = malloc(sizeof(License));
    license1->customer = malloc(sizeof(Customer *));
    license1->customer = customer;
    license1->licenseId = licenseId;
    return license1;
}