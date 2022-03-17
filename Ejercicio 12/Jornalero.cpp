//
// Created by bruno on 3/17/2022.
//

#include "Jornalero.h"

Jornalero::Jornalero(std::string nombre, float jornal, int horas) : Empleado(nombre) {
    this->jornal = jornal;
    this->horas = horas;
}

float Jornalero::getJornal() {
    return jornal;
}

int Jornalero::getHoras() {
    return horas;
}

float Jornalero::darLiquidacion() {
    return horas * jornal;
}


