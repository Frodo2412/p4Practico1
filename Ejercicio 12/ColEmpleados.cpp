//
// Created by bruno on 3/17/2022.
//

#include "ColEmpleados.h"


ColEmpleados::ColEmpleados() {
    numEmpleados = 0;
}

void ColEmpleados::agregarEmpleado(Empleado *empleado) {
    empleados[numEmpleados] = empleado;
    numEmpleados++;
}

Empleado *ColEmpleados::operator[](int indice) {
    return empleados[indice];
}

int ColEmpleados::getNumEmpleados() {
    return numEmpleados;
}

void ColEmpleados::liberarMemoria() {
    for (int i = 0; i < numEmpleados; i++)
        delete empleados[i];
}

float ColEmpleados::calcularLiquidacion() {
    float liquidacion = 0;
    for (int i = 0; i < numEmpleados; i++)
        liquidacion += empleados[i]->darLiquidacion();
    return liquidacion;
}
