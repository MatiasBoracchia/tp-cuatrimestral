//
// Created by Usuario on 25-May-17.
//

#include "Material.h"

void replaceMaterial(Material* material, Material* newMaterial){
    material = newMaterial;
}
void deleteMaterial(Material* material){
    free(material->author);
    free(material->code);
    free(material->status);
    free(material->title);
    free(material->type);
    //free(material->year);
    free(material);
}
Material* createMaterial(char* type, char* code, char* author, char* title, char* status, int year){
    Material* material1 = malloc(sizeof(Material));
    material1->type = type;
    material1->code = code;
    material1->author = author;
    material1->title = title;
    material1->status = status;
    material1->year = year;

    return material1;
}
