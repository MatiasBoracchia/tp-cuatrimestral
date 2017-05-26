#include <stdio.h>
#include <mem.h>


#include "tp1/Electrodomestic.h"
#include "tp1/Catalogue.h"
#include "tp1/Provider.h"


#include "tp3/Library.c"
#include "tp3/Person.c"
#include "tp3/Loan.c"
#include "tp3/Material.c"


#include "tp4/Recepcionist.c"
#include "tp4/Client.c"
#include "tp4/Invoice.c"


int main() {
    //----------TP1---------//
    printf("//----------TP1---------//\n");
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
//
//    receiveProduct(&P,&E);
//
//    for (int i = 0; i < 20 ; ++i) {
//        if (P.products[i]==){
//            break;
//        }
//        printf("Product Name: %s\n",P.products[i]);
//    }

    //----------TP2---------//


    //----------TP3---------//
    printf("//----------TP3---------//\n");

    Material material;
    strcpy(material.author,"Perez");
    strcpy(material.code, "ABCD123");
    strcpy(material.status, "availabel");
    strcpy(material.title,"Harry Potter");
    strcpy(material.type,"Fanatsy");
    material.year = 1997;

    Person person;
    strcpy(person.type, "Student");
    strcpy(person.mail, "juan@gmail.com");
    strcpy(person.name, "Juan");
    strcpy(person.surname, "Lagos");
    strcpy(person.telephone, "1541422589");
    person.debt = 0.0;
    person.numberOfBooks = 0;

    Loan loan1;
    loan1.daysKept = 0;
    strcpy(loan1.code, "XYZ987");
    strcpy(loan1.exitDate, "");
    loan1.charge = 10.0;



    takeMaterial(&person, &material, &loan1, "23/5/2017");
    returnMaterial(&person, &material, &loan1, 2);

    printf("The %s debt is: %.2f \n", person.type, person.debt);

    Library library;
    library.numberOfPeople = 0;
    library.numberOfMaterial = 0;

    addMaterial(&library,&material);
    addPerson(&library,&person);
    printf("The amount of books in the library is: %d \n",library.numberOfMaterial);
    printf("The amount of people in the library is: %d  \n",library.numberOfPeople);

    for (int i = 0; i < library.numberOfMaterial; ++i) {
        printf("Info of material: %s,%s \n ",library.material[i]->title,library.material[i]->status);
    }

    //-------------TP4----------//
    printf("//----------TP4---------//\n");
    Room room;
    room.numberOfRoom = 12;
    strcpy(room.status, "Reserved");
    strcpy(room.typeOfRoom, "Normal");

    Recepcionist recepcionist;
    strcpy(recepcionist.name,"Juana");
    strcpy(recepcionist.surname,"Rios");
    recepcionist.id = 444;
    recepcionist.rooms[0] = &room;
    recepcionist.amountOfRooms = 1;
    giveInformation(&recepcionist);

    Client client;
    client.id = 1230;
    strcpy(client.name, "Lorenzo");
    strcpy(client.surname, "Rojas");


    makeReservation(&client,&room);

    Invoice invoice1;
    invoice1.id = 898;
    strcpy(invoice1.hotelName, "Paquitos");

    payForRoom(&invoice1,&client,&room);
    printf("Invoice: %d \t %s \t %s \n",invoice1.id,invoice1.clientName,room.status);
    giveInformation(&recepcionist);
    return 0;
}