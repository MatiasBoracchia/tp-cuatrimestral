#include <stdio.h>
#include <mem.h>


#include "exercise1/Appliance.h"
#include "exercise1/Catalogue.h"
#include "exercise1/Manufacturer.c"
#include "exercise1/Provider.c"
#include "exercise1/Invoice.h"

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
    printf("//----------TP1---------//\n");
    Appliance* E = createAppliance("Microwave","Samsung hx3",7100.0);
    Manufacturer* manufacturer1 = createManufacturer("S-R","We worken","Buenos Aires","Bahia Blanca","15-3142-5967","www.s-r.come",E);


    printf("Appliance\t Model \t\t Price \n");
    printf("%s \t %s \t %.2f \n", E->name, E->model, E->price);

    setPrice(E,6500.0);
    printf("%s \t %s \t %.2f \n", E->name, E->model, E->price);

    Catalogue* C= createCatalogue("12CWE345","Kitchen Products",0,20);
    addToCatalogue(C,E);
    setDiscount(C,5);
    float price = calculatePriceWithDiscount(C,E);
    printf("The new price of %s with discunt %d is %.2f \n",E->name,C->discount,price);

    Provider* P= createProvider("Provider X2","Provider X2 is a company that specialices in...","Buenos Aires","Chacarita","15-4140-1247","www.providerx2.com",25);


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