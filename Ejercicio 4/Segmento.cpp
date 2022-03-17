//
// Created by bruno on 3/5/2022.
//

#include "Segmento.h"
#include <cmath>

Segmento::Segmento() {
    this->a = Punto();
    this->b = Punto();
}

Segmento::Segmento(Punto p) {
    this->a = p;
    this->b = Punto();
}

Segmento::Segmento(Punto p1, Punto p2) {
    this->a = p1;
    this->b = p2;
}

Segmento::Segmento(float x1, float x2, float y1, float y2) {
    this->a = Punto(x1, x2);
    this->b = Punto(y1, y2);
}

float Segmento::largo() {
    return sqrt(pow(this->a.getX() - this->b.getX(), 2) + pow(this->a.getY() - this->b.getY(), 2));
}
