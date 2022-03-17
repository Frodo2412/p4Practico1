//
// Created by bruno on 3/17/2022.
//

#include "EmpleadoComun.h"

EmpleadoComun::EmpleadoComun(std::string nombre, float sueldo) : Empleado(nombre) {
    this->sueldo = sueldo;
}

float EmpleadoComun::getSueldo() {
    return sueldo;
}

float EmpleadoComun::darLiquidacion() {
    return sueldo;
}


