//
// Created by Usuario on 25-May-17.
//

#include <malloc.h>
#include "Catalogue.h"
Catalogue* careateCatalogue(char* id, char* name,int discount, Electrodomestic** products,int maxAmountOfElectrodomestics){
    Catalogue* result = malloc(sizeof(Catalogue));
    result->id = id;
    result->name = name;
    result->discount = discount;
    result->maxAmountOfElectrodomestics = maxAmountOfElectrodomestics;
    //pregunatrle a jose el products


    return result;


}
void setDiscount(Catalogue* catalogue, int discount){
    catalogue->discount = discount;
}
float calculatePriceWithDiscount(Catalogue* catalogue, Electrodomestic** electrodomestic){
    float discount = electrodomestic->price * (catalogue->discount / 100.0);
    return electrodomestic->price - discount;
}
void addToCatalogue(Catalogue* catalogue, Electrodomestic** electrodomestic){

}
