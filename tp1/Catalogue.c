//
// Created by Usuario on 25-May-17.
//

#include "Catalogue.h"

void setDiscount(Catalogue* catalogue, int discount){
    catalogue->discount = discount;
}
float calculatePriceWithDiscount(Catalogue* catalogue, Electrodomestic* electrodomestic){
    float discount = electrodomestic->price * (catalogue->discount / 100.0);
    return electrodomestic->price - discount;
}
void addToCatalogue(Catalogue* catalogue, Electrodomestic* electrodomestic){

}
