//
// Created by Usuario on 06-Jun-17.
//

#include "SellLine.h"

SellLine* createSellLine(int id, int maxAmountOfSells) {
    SellLine *sellLine1 = malloc(sizeof(SellLine));
    sellLine1->id = id;
    sellLine1->sells = malloc(sizeof(Sell *) * maxAmountOfSells);
    sellLine1->maxAmountOfSells = maxAmountOfSells;
    sellLine1->amountOfSells = 0;
    return sellLine1;
}

float calculateTotalSellLineCost(SellLine* sellLine1) {
    float aux = 0.0;
    for (int i = 0; i < sellLine1->amountOfSells; ++i) {
        float aux2 = sellLine1->sells[i]->quantity * sellLine1->sells[i]->product1->price;
        float aux3 = (aux2 * sellLine1->sells[i]->discount) / 100.0;
        aux = aux + (aux2 - aux3);
    }
    return aux;
}

void addToSellLine(SellLine* sellLine1, Sell* aSell) {
    sellLine1->sells[sellLine1->amountOfSells] = aSell;
    sellLine1->amountOfSells = sellLine1->amountOfSells + 1;
    printf("Sell was added \n");
}

void deleteSellLine(SellLine* sellLine1, int position) {
    if (sellLine1->amountOfSells >= position) {
        printf("Wrong position \n");
        return;
    } else {
        for (int i = position; i < sellLine1->amountOfSells - 1; ++i) {
            sellLine1->sells[i] = sellLine1->sells[i + 1];
            sellLine1->amountOfSells = sellLine1->amountOfSells - 1;
            printf("Sell was removed \n");
        }
    }
}

void infoSellLine(SellLine* sellLine1) {
    printf("Sell Line : %d\n", sellLine1->id);
    for (int i = 0; i < sellLine1->amountOfSells; ++i) {
        printf("%d Sell: name %s quantity %d \n", i, sellLine1->sells[i]->product1->name,
               sellLine1->sells[i]->quantity);
    }
}