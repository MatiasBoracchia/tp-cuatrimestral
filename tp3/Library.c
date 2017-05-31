//
// Created by Usuario on 25-May-17.
//
#include "Library.h"

void addPerson(Library* library, Person* person){
    if(library->numberOfPeople < library->maxCapacityPeople){
        library->person[library->numberOfPeople] = person;
        library->numberOfPeople = library->numberOfPeople +1;
    }else{
        printf("CANNOT ACCEPT MORE PEOPLE ");
    }
}

void addMaterial(Library* library, Material* material){
    if(library->numberOfMaterial < library->maxCapacityMaterials){
        library->material[library->numberOfMaterial] = material;
        library->numberOfMaterial = library->numberOfMaterial +1;
    }
}

Library* createLibrary(int maxCapacityMaterials, int maxCapacityPeople){
    Library* library = malloc(sizeof(Library));
    library->maxCapacityPeople = maxCapacityPeople;
    library->maxCapacityMaterials = maxCapacityMaterials;

    library->material = malloc(sizeof(Material*)*maxCapacityMaterials);
    library->person = malloc(sizeof(Person*)*maxCapacityPeople);

    return library;
}
