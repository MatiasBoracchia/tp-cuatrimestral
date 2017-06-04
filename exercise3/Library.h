//
// Created by Usuario on 25-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_LIBRARY_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_LIBRARY_H
#include "Material.h"
#include "Person.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct library Library;
struct library{
    Material** material;
    Person** person;
    int numberOfMaterials;
    int maxCapacityMaterials;
    int maxCapacityPeople;
    int numberOfPeople;

};
Library* createLibrary(int maxCapacityMaterials, int maxCapacityPeople);
void addPerson(Library* library, Person* person);
void addMaterial(Library* library, Material* material);
void libraryInfo(Library* library1);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_LIBRARY_H
