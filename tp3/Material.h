//
// Created by Usuario on 25-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_MATERIAL_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_MATERIAL_H
#include <stdio.h>
#include <stdlib.h>
typedef struct material Material;
struct material{
    char type[20];
    char code[10];
    char author[20];
    char title[20];
    int year;
    char status[10];
};

struct book{
    Material material;
    char publisher[20];
};

struct magazine{
    Material material;
};
void deleteMaterial(Material* material);
void replaceMaterial(Material* material, Material* newMaterial);


#endif //TP_CUATRIMESTRAL_INDIVIDUAL_MATERIAL_H
