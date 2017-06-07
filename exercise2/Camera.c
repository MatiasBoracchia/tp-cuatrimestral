//
// Created by Usuario on 06-Jun-17.
//

#include "Camera.h"
Camera* createCamera(Product* product, int megaPixels,int screenLength,int opticalZoom){
    Camera* camera1 = malloc(sizeof(Camera));
    camera1->product =malloc(sizeof(Product));
    camera1->product = product;
    camera1->megaPixels = megaPixels;
    camera1->screenLength = screenLength;
    camera1->opticalZoom = opticalZoom;
    product->type = "Camera";
    return camera1;
}
