cmake_minimum_required(VERSION 3.6)
project(tp-cuatrimestral-individual)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c exercise1/Provider.h exercise1/Catalogue.h exercise1/Manufacturer.h exercise1/Cart.h exercise1/Invoice.h exercise1/Appliance.c exercise1/Catalogue.c)
add_executable(tp-cuatrimestral-individual ${SOURCE_FILES})