//
// Created by Usuario on 25-May-17.
//

#include <stdlib.h>

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_MATERIAL_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_MATERIAL_H

typedef struct material Material;
struct material {
    char *type;
    char *code;
    char *author;
    char *title;
    char *status;
    int year;
    char *bookOrMagazine;
};

Material* createMaterial(char* type, char* code, char* author, char* title, char* status, int year);

void deleteMaterial(Material* material);

void replaceMaterial(Material* material, Material* newMaterial);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_MATERIAL_H