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
    free(material->year);
    free(material);
}