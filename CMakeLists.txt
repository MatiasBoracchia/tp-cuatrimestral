cmake_minimum_required(VERSION 3.6)
project(tp-cuatrimestral-individual)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c tp1/Electrodomestic.h tp1/Provider.h tp1/Label.h tp1/Catalogue.h tp1/Manufacturer.h tp1/Cart.h tp1/CartLine.h tp1/Invoice.h)
add_executable(tp-cuatrimestral-individual ${SOURCE_FILES})