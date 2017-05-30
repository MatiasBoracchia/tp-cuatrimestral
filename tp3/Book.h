//
// Created by Usuario on 30-May-17.
//
#include "Material.h"
#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_BOOK_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_BOOK_H
typedef  struct book Book;
struct book{
    Material* material;
    char* publisher;
};
Book* createBook(Material* material, char* publisher);
#endif //TP_CUATRIMESTRAL_INDIVIDUAL_BOOK_H
