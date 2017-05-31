//
// Created by Usuario on 25-May-17.
//

#include <stdio.h>
#include "Manufacturer.h"

Manufacturer* createManufacturer(char* name, char* description, char* location, char* city, char* phoneNumber, char* web){
    Manufacturer* manufacturer = malloc(sizeof(Manufacturer));
    manufacturer->name = name;
    manufacturer->city = city;
    manufacturer->description = description;
    manufacturer->location = location;
    manufacturer->phoneNumber = phoneNumber;
    manufacturer->web = web;

    return manufacturer;
}