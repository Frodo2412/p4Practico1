//
// Created by bruno on 3/17/2022.
//

#include "Empleado.h"

Empleado::Empleado(std::string nombre) {
    this->nombre = nombre;
}

std::string Empleado::getNombre() {
    return nombre;
}
