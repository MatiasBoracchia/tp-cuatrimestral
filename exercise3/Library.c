//
// Created by Usuario on 25-May-17.
//
#include "Library.h"

void addPerson(Library* library, Person* person) {
    if (library->numberOfPeople < library->maxCapacityPeople) {
        library->person[library->numberOfPeople] = person;
        library->numberOfPeople = library->numberOfPeople + 1;
    } else {
        printf("CANNOT ACCEPT MORE PEOPLE ");
    }
}

void addMaterial(Library* library, Material* material) {
    if (library->numberOfMaterials < library->maxCapacityMaterials) {
        library->material[library->numberOfMaterials] = material;
        library->numberOfMaterials = library->numberOfMaterials + 1;
    }
}

Library* createLibrary(int maxCapacityMaterials, int maxCapacityPeople) {
    Library *library = malloc(sizeof(Library));
    library->maxCapacityPeople = maxCapacityPeople;
    library->maxCapacityMaterials = maxCapacityMaterials;
    library->material = malloc(sizeof(Material *) * maxCapacityMaterials);
    library->person = malloc(sizeof(Person *) * maxCapacityPeople);
    library->numberOfMaterials = 0;
    library->numberOfPeople = 0;
    return library;
}

void libraryInfo(Library* library1) {
    for (int i = 0; i < library1->numberOfMaterials; ++i) {
        printf("The %s %s is %s \n", library1->material[i]->bookOrMagazine, library1->material[i]->title,
               library1->material[i]->status);
    }
}