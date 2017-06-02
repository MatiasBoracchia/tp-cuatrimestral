//
// Created by Usuario on 25-May-17.
//

#include <malloc.h>
#include "Catalogue.h"
Catalogue* createCatalogue(char* id, char* name,int discount,int maxAmountOfElectrodomestics){
    Catalogue* result = malloc(sizeof(Catalogue));
    result->id = id;
    result->name = name;
    result->discount = discount;
    result->maxAmountOfElectrodomestics = maxAmountOfElectrodomestics;

    result->products = malloc(sizeof(Appliance*)*result->amountOfElectrodomestics);

    return result;


}
void setDiscount(Catalogue* catalogue, int discount){
    catalogue->discount = discount;
}
float calculatePriceWithDiscount(Catalogue* catalogue, Appliance* electrodomestic){
    float discount = electrodomestic->price * (catalogue->discount / 100.0);
    return electrodomestic->price - discount;
}
void addToCatalogue(Catalogue* catalogue, Appliance* electrodomestic){
    if(catalogue->amountOfElectrodomestics<catalogue->maxAmountOfElectrodomestics){
        catalogue->products[catalogue->amountOfElectrodomestics] = electrodomestic;
        catalogue->amountOfElectrodomestics = catalogue->amountOfElectrodomestics +1;
    }
}

Appliance* removeApplianceFromCatalogue(Catalogue* catalogue1, Appliance* appliance1){
    for (int i = 0; i < catalogue1->amountOfElectrodomestics ; ++i) {
        if(catalogue1->products[i]->model == appliance1->model){
            Appliance* appliance2 = catalogue1->products[i];
            free(catalogue1->products[i]);
            catalogue1->amountOfElectrodomestics = catalogue1->amountOfElectrodomestics-1;
        }
    }
}
int checkQuantityInCatalogue(Catalogue* catalogue1, Appliance* appliance1){
    int aux = 0;
    for (int i = 0; i < catalogue1->amountOfElectrodomestics ; ++i) {
        if(catalogue1->products[i]->model == appliance1->model){
            aux = aux + 1;
        }
    }
    return aux;
}
