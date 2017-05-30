//
// Created by Usuario on 25-May-17.
//
#include "Library.h"

void addPerson(Library* library, Person* person){
    if(library->numberOfPeople < 50){
        library->person[library->numberOfPeople] = person;
        library->numberOfPeople = library->numberOfPeople +1;
    }else{
        //Person person1[200];
        //library->person = person1;
    }
}

void addMaterial(Library* library, Material* material){
    if(library->numberOfMaterial < 100){
        library->material[library->numberOfMaterial] = material;
        library->numberOfMaterial = library->numberOfMaterial +1;
    }
}

Library* createLibrary(Material** material, Person** person, int numberOfMaterials, int numberOfPeople){
    Library* library = malloc(sizeof(Library));
    library->numberOfMaterials = numberOfMaterials;
    library->numberOfPeople = numberOfPeople;
    //faltan los dos ARRAYS
}
