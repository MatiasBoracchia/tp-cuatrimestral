//
// Created by Usuario on 25-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_LIBRARY_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_LIBRARY_H
#include "Material.h"

typedef struct library Library;
struct library{
    Material material[];
    Person person[];
};

void addPerson(Library* library, Person* person);
void addMaterial(Library* library, Material* material);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_LIBRARY_H
