//
// Created by Usuario on 06-Jun-17.
//

#include "Producer.h"

Producer* createProducer(Product* productMade,char* name,int id){
    Producer* producer1 = malloc(sizeof(Producer));
    producer1->productMade = malloc(sizeof(Product));
    producer1->productMade = productMade;
    producer1->name = name;
    producer1->id = id;
    return producer1;
}
void provideToSupplier(Producer* producer1, Supplier* supplier1, int quantity){
    for (int i = 0; i < quantity; ++i) {
        supplier1->products[supplier1->amountOfProducts] = createProduct(producer1->productMade->name,producer1->productMade->id,producer1->productMade->price);
        supplier1->amountOfProducts = supplier1->amountOfProducts +1;
    }
}