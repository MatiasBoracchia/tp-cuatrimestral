//
// Created by Usuario on 31-May-17.
//

#include "Book.h"

Book* createBook(Material* material, char* publisher) {
    Book *book1 = malloc(sizeof(Book));
    book1->material = malloc(sizeof(Material));
    book1->material = material;
    book1->publisher = publisher;
    material->bookOrMagazine = "Magazine";
    return book1;
}