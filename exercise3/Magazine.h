//
// Created by Usuario on 30-May-17.
//
#include "Material.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_MAGAZINE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_MAGAZINE_H
typedef struct magazine Magazine;
struct magazine{
    Material* material;
};
Magazine* createMagazine(Material* material);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_MAGAZINE_H
