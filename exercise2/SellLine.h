//
// Created by Usuario on 06-Jun-17.
//
#include "Sell.h"
#include <stdlib.h>
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_SELLLINE_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_SELLLINE_H
typedef struct sellLine SellLine;
struct sellLine{
    Sell** sells;
    int id;
    float totalCost;
    int maxAmountOfSells;
    int amountOfSells;
};
SellLine* createSellLine(int id, int maxAmountOfSells);
float calculateTotalSellLineCost(SellLine* sellLine1);
void addToSellLine(SellLine* sellLine1, Sell* aSell);
void deleteSellLine(SellLine* sellLine1, int position);
void infoSellLine(SellLine* sellLine1);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_SELLLINE_H
