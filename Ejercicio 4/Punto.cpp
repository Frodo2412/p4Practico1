//
// Created by bruno on 3/5/2022.
//

#include "Punto.h"

Punto::Punto(float x, float y) {
    this->x = x;
    this->y = y;
}

float Punto::getX() const {
    return this->x;
}

float Punto::getY() const {
    return this->y;
}

void Punto::setX(float x) {
    this->x = x;
}

void Punto::setY(float y) {
    this->y = y;
}
