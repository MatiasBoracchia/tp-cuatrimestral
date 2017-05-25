#include <stdio.h>
#include <mem.h>
#include "tp1/Electrodomestic.h"
#include "tp1/Catalogue.h"
#include "tp1/Provider.h"


int main() {
    //----------TP1---------//

    Electrodomestic E;
    strcpy(E.name,"Microwave");
    strcpy(E.model,"Samsung hx3");
    E.price = 7100.0;

    printf("Electrodomestic\t Model \t\t Price \n");
    printf("%s \t %s \t %.2f \n", E.name, E.model, E.price);

    setPrice(&E,6500.0);
    printf("%s \t %s \t %.2f \n", E.name, E.model, E.price);


    Catalogue C;
    strcpy(C.id,"12CWE345");
    strcpy(C.name,"Kitchen Products");
    C.discount = 0;
    C.products[0] = E;
    setDiscount(&C,5);
    float price = calculatePriceWithDiscount(&C,&E);
    printf("The new price of %s with discunt %d is %.2f \n",E.name,C.discount,price);


    Provider P;

    strcpy(P.name,"Provider X2");
    strcpy(P.city,"Chacarita");
    strcpy(P.description,"Provider X2 is a company that specialices in...");
    strcpy(P.location,"Buenos Aires");
    strcpy(P.phoneNumber,"15-4140-1247");
    strcpy(P.web,"www.providerx2.com");

    receiveProduct(&P,&E);

    for (int i = 0; i < 20 ; ++i) {
        if (P.products[i]==){
            break;
        }
        printf("Product Name: %s\n",P.products[i]);
    }

    //----------TP2---------//


}