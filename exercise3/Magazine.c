//
// Created by Usuario on 04-Jun-17.
//

#include "Magazine.h"

Magazine* createMagazine(Material* material) {
    Magazine *magazine1 = malloc(sizeof(Magazine));
    magazine1->material = malloc(sizeof(Material));
    magazine1->material = material;
    material->bookOrMagazine = "Magazine";
    return magazine1;
}
