//
// Created by bruno on 3/5/2022.
//

#ifndef PRACTICO_1_SEGMENTO_H
#define PRACTICO_1_SEGMENTO_H
#include "Punto.h"


class Segmento {
private:
    Punto a, b;
public:
    Segmento();
    Segmento(Punto, Punto);
    Segmento(Punto);
    Segmento(float, float, float, float);
    float largo();
};


#endif //PRACTICO_1_SEGMENTO_H
