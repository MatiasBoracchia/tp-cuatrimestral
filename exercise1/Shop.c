//
// Created by Usuario on 01-Jun-17.
//

#include "Shop.h"

Shop* createShop(Catalogue* catalogue1, char* name){
    Shop* shop1 = malloc(sizeof(Shop));
    shop1->shopCatalogue = malloc(sizeof(Catalogue));
    shop1->shopCatalogue = catalogue1;
    shop1->name = name;
    shop1->moneyEarned = 0.0;
    shop1->productsSoled = 0;
    return shop1;
}
void addToCart(Shop* shop1, Cart* cart1, Appliance* appliance1,int quantity){
    for (int i = 0; i < quantity; ++i) {
        if(hasStock(shop1,appliance1)==1){
            cart1->appliances[cart1->amountOfAppliances] = removeApplianceFromCatalogue(shop1->shopCatalogue,appliance1);
            cart1->amountOfAppliances = cart1->amountOfAppliances + 1;
            float priceOfApplianceWithDiscount = calculatePriceWithDiscount(shop1->shopCatalogue,appliance1);
            cart1->total = (float)(cart1->total + priceOfApplianceWithDiscount);
        }else{
            printf("NO MORE APPLIANCE");
        }
    }
}

int hasStock(Shop* shop1, Appliance* appliance1){
    for (int i = 0; i < shop1->shopCatalogue->amountOfElectrodomestics; ++i) {
        if(shop1->shopCatalogue->products[i]->model = appliance1->model){
            return 1;
        }
    }
    return 0;
}
void shopInfo(Shop* shop1){
    for (int i = 0; i < shop1->shopCatalogue->amountOfElectrodomestics; ++i) {
        printf("Appliances: %d %s \n",i,shop1->shopCatalogue->products[i]->model);
    }
}
