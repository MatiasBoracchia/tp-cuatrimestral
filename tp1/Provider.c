//
// Created by Usuario on 25-May-17.
//

#include "Provider.h"

void receiveProduct(Provider* provider, Electrodomestic* electrodomestic){
    for (int i = 0; i < 20 ; ++i) {
        if(provider->products[i]==NULL){
            provider->products[i] = electrodomestic;
            break;
        }
    }
    return;
}
void providesProduct(Provider* provider, Electrodomestic* electrodomestic){
    for (int i = 0; i < 20 ; ++i) {
        if(provider->products[i]==electrodomestic){
            provider->products[i] =NULL ;
            break;
        }
    }
    return;
}