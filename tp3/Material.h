//
// Created by Usuario on 25-May-17.
//

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_MATERIAL_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_MATERIAL_H

typedef struct material Material;
struct material{
    char* type;
    char* code;
    char* author;
    char* title;
    char* status;
    int year;
};
//o creo un book o una magazine no un material

void deleteMaterial(Material* material);
void replaceMaterial(Material* material, Material* newMaterial);


#endif //TP_CUATRIMESTRAL_INDIVIDUAL_MATERIAL_H
