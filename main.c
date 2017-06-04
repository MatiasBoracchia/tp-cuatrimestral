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

#include "exercise4/Recepcionist.c"
#include "exercise4/Client.c"
#include "exercise4/Invoice2.c"


#include "exercise5/Administrator.c"
#include "exercise5/Customer.c"
#include "exercise5/License.c"
#include "exercise5/Rent.h"
#include "exercise5/Surplus.h"


int main() {
    //PROBAR EL PROVIDER
    //PROBAR EL PROVIDER
    //PROBAR EL PROVIDER
    //PROBAR EL PROVIDER

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


    //addToCart(shop1,cart1,appliance1,3);

    /*printf("Appliance\t Model \t\t Price \n");
    printf("%s \t %s \t %.2f \n", appliance1->name, appliance1->model, appliance1->price);

    setPrice(appliance1,6500.0);
    printf("%s \t %s \t %.2f \n", appliance1->name, appliance1->model, appliance1->price);

    Catalogue* C= createCatalogue("12CWE345","Kitchen Products",0,20);
    addToCatalogue(C,appliance1);
    setDiscount(C,5);
    float price = calculatePriceWithDiscount(C,appliance1);
    printf("The new price of %s with discunt %d is %.2f \n",appliance1->name,C->discount,price);

    Provider* P= createProvider("Provider X2","Provider X2 is a company that specialices in...","Buenos Aires","Chacarita","15-4140-1247","www.providerx2.com",25);
*/

 /*   //----------TP2---------//


    printf("//----------TP3---------//\n");


    Material* material = createMaterial("Fanatsy","ABCD123","Rowlig","Harry Potter","Availabel",1997);
    Book* book1 = createBook(material,"Santillana");
    Student* student1 = createStudent(4004);

    Person* person1 = createPerson("Student","Juan","Lagos","juan@gmail.com","15-4142-2589",0,0.0,student1,NULL);

    Loan* loan1 = createLoan("XYZ987","",10.0,1);
    Library* library1 = createLibrary(100,100);

    takeMaterial(person1, book1->material, loan1, "23/5/2017");
    returnMaterial(person1, book1->material, loan1, 2);


    printf("The %s debt is: %.2f \n", person1->type, person1->debt);


    addMaterial(library1,book1->material);
    addPerson(library1,person1);
    printf("The amount of books in the library is: %d \n",library1->numberOfMaterials);
    printf("The amount of people in the library is: %d  \n",library1->numberOfPeople);



    for (int i = 0; i < library1->numberOfMaterials; ++i) {
        printf("Info of material: %s,%s \n ",library1->material[i]->title,library1->material[i]->status);
    }


    printf("//----------TP4---------//\n");

    Recepcionist* recepcionist = createRecepcionist("Juana","Rios",20,444);

    giveInformation(recepcionist);
    Client* client = createClient("Lorenzo","Rojas",1230);

    makeReservation(client,recepcionist, 0);


    Invoice* invoice1 =createInvoice("Paquitos",client->name,client->surname,client->id,10,898);
    //payForRoom(invoice1,client,recepcionist,);
    //printf("Invoice: %d \t %s \t %s \n",invoice1->id,invoice1->clientName,room.status);
    giveInformation(recepcionist);

    printf("//----------TP5---------//\n");

    License* license1 = createLicense(4444);

    Customer* customer = createCustomer("Francisco","Garcia", 47897,license1);

    Administrator* admin = createAdmin("Esteban", "Lauri", 12345, 20);

    registerCustomer(admin,customer);

    printf("amout of clients: %d \n",admin->amountOfCustomers);
    printf("Name of Customer in admin: %s \n",admin->customers[0]->name);








*/



    return 0;
}