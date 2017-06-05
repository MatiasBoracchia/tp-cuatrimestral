#include <stdio.h>
#include <mem.h>


#include "exercise1/Appliance.h"
#include "exercise1/Catalogue.h"
#include "exercise1/Manufacturer.c"
#include "exercise1/Provider.c"
#include "exercise1/Invoice.c"
#include "exercise1/Shop.c"
#include "exercise1/Cart.c"

#include "exercise3/Library.c"
#include "exercise3/Person.c"
#include "exercise3/Loan.c"
#include "exercise3/Material.c"
#include "exercise3/Book.c"
#include "exercise3/Student.c"
#include "exercise3/Magazine.c"
#include "exercise3/Professor.c"

#include "exercise4/Receptionist.c"
#include "exercise4/Client.c"
#include "exercise4/Invoice2.c"


#include "exercise5/Administrator.c"
#include "exercise5/Customer.c"
#include "exercise5/License.c"
#include "exercise5/Rent.h"
#include "exercise5/Surplus.h"


int main() {

/*
    printf("//----------TP1---------//\n");
    Appliance* appliance1 = createAppliance("Microwave","Samsung hx3",7100.0);
    Appliance* appliance2 = createAppliance("Freezer","Whirlpool",16000);
    Manufacturer* manufacturer1 = createManufacturer("S-R","We worken","Bahia Blanca","Buenos Aires","15-3142-5967","www.s-r.come",appliance1);
    Manufacturer* manufacturer2 = createManufacturer("Manu","We also worken","Junin","Buenos Aires","15-7894-1234","www.elmanu.com",appliance2);
    Provider* provider1 = createProvider("Proveedor47","El mejor por lejos","La Plata","Buenos Aires","15-3178-0039","www.proveedor47.com",200);
    supply(manufacturer1,provider1,20);
    supply(manufacturer2,provider1,10);
    supply(manufacturer1,provider1,10);

    printf("Quantity of %s %s of Provider is: %d \n",appliance1->name,appliance1->model,checkQuantity(provider1,appliance1));


    Catalogue* catalogue1 = createCatalogue("1234567","Appliances",15,100);
    Shop* shop1 = createShop(catalogue1,"PPP");
    supplyToShop(provider1,shop1);

    printf("Quantity of %s %s of Provider is: %d \n",appliance1->name,appliance1->model,checkQuantity(provider1,appliance1));
    printf("Quantity registered of %s %s of Provider is: %d \n",appliance1->name,appliance1->model,provider1->amountOfElectrodomestics);
    printf("Amount of %s %s of Shopis %d \n",appliance1->name,appliance1->model,checkQuantityInCatalogue(shop1->shopCatalogue,appliance1));
    printf("Amount of Electro in Shop is %d \n",shop1->shopCatalogue->amountOfElectrodomestics);
    Cart* cart1 = createCart("myCart003",10);
    cartInfo(cart1);
    addToCart(shop1,cart1,appliance1,2);
    cartInfo(cart1);
    Invoice* invoice1 = generateInvoice(cart1);
    payInvoice(invoice1); //CORREGIR ESTE METODO
*/




    //----------TP2---------//


/*
    printf("//----------TP3---------//\n");


    Material* material1 = createMaterial("Fanatsy","ABCD123","Rowling","Harry Potter 1","Available",1997);
    Material* material2 = createMaterial("Fanatsy","ABCD124","Rowling","Harry Potter 2","Available",1998);
    Material* material3 = createMaterial("Fanatsy","ABCD125","Rowling","Harry Potter 3","Available",1999);
    Material* material4 = createMaterial("Fashion","ABC126","People","Summer 2016","Available",2016);

    Book* book1 = createBook(material1,"Santillana");
    Book* book2 = createBook(material2,"Santillana");
    Book* book3 = createBook(material3,"Santillana");
    Magazine* magazine1 = createMagazine(material4);

    Person* person1 = createPerson("Juan","Lagos","juan@gmail.com","15-4142-2589",15);
    Person* person2 = createPerson("Nicolas","Tagliafico","nicotagliafico3@gmail.com","15-4921-0666",20);

    Student* student1 = createStudent(4004,person1);
    Professor* professor1 = createProfessor(103683,person2);

    Library* library1 = createLibrary(100,100);
    addPerson(library1,person1);
    addPerson(library1,person2);
    addMaterial(library1,material1);
    addMaterial(library1,material2);
    addMaterial(library1,material3);
    addMaterial(library1,material4);

    Loan* loan1 = takeMaterial(person1,material1,"12/10/2016");
    Loan* loan2 = takeMaterial(person1,material1,"13/10/2016");
    Loan* loan3 = takeMaterial(person1,material2,"13/10/2016");
    Loan* loan4 = takeMaterial(person2,material4,"13/10/2016");
    libraryInfo(library1);
    returnMaterial(person1,material1,loan1,3);
    returnMaterial(person2,material4,loan4,1);
    libraryInfo(library1);
    deleteMaterial(material3);
    libraryInfo(library1);

*/


/*

    printf("//----------TP4---------//\n");

    Receptionist* recepcionist = createReceptionist("Juana","Rios",20,444);

    giveInformation(recepcionist);
    Client* client = createClient("Lorenzo","Rojas",1230);
    Client* client2 = createClient("Dario","Benedeto",2302);
    makeReservation(client,recepcionist, 0);
    makeReservation(client2,recepcionist,0);
    makeReservation(client2,recepcionist,1);

    Invoice2* invoice1 =payForRoom(client,recepcionist->rooms[0]);

    giveInformation(recepcionist);

*/



       printf("//----------TP5---------//\n");

       License* license1 = createLicense(4444);

       Customer* customer = createCustomer("Francisco","Garcia", 47897,license1);

       Administrator* admin = createAdmin("Esteban", "Lauri", 12345, 20);

       registerCustomer(admin,customer);

       printf("amout of clients: %d \n",admin->amountOfCustomers);
       printf("Name of Customer in admin: %s \n",admin->customers[0]->name);






    return 0;
}