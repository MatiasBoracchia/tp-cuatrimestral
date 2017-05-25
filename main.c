#include <stdio.h>
#include <mem.h>
#include "tp1/Electrodomestic.h"

int main() {
    Electrodomestic E;
    strcpy(E.name,"Microwave");
    strcpy(E.model,"Samsung hx3");
    E.price = 7100.0;

    printf("Electrodomestic\t Model \t\t Price \n");
    printf("%s \t %s \t %.2f \n", E.name, E.model, E.price);

    setPrice(&E,6500);
    printf("%s \t %s \t %.2f \n", E.name, E.model, E.price);
}