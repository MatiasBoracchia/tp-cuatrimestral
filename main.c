#include <stdio.h>
#include <mem.h>
#include "tp1/Electrodomestic.h"
#include "tp1/Catalogue.h"


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


    //----------TP2---------//
}