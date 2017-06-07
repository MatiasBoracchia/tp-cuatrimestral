//
// Created by Usuario on 06-Jun-17.
//

#include "Product.h"
#include <stdlib.h>

#ifndef TP_CUATRIMESTRAL_INDIVIDUAL_CAMERA_H
#define TP_CUATRIMESTRAL_INDIVIDUAL_CAMERA_H

typedef struct camera Camera;
struct camera {
    Product *product;
    int megaPixels;
    int screenLength;
    int opticalZoom;
};

Camera* createCamera(Product* product, int megaPixels,int screenLength,int opticalZoom);

#endif //TP_CUATRIMESTRAL_INDIVIDUAL_CAMERA_H