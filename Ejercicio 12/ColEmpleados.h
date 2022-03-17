//
// Created by bruno on 3/17/2022.
//

#ifndef PRACTICO_1_COLEMPLEADOS_H
#define PRACTICO_1_COLEMPLEADOS_H


#include "Empleado.h"

const int MAX_CANTIDAD_EMPLEADOS = 100;

class ColEmpleados {
private:
    Empleado *empleados[MAX_CANTIDAD_EMPLEADOS]{};
    int numEmpleados;
public:
    ColEmpleados();
    void agregarEmpleado(Empleado *empleado);
    Empleado *operator[](int indice);
    int getNumEmpleados();
    void liberarMemoria();
    float calcularLiquidacion();
};


#endif //PRACTICO_1_COLEMPLEADOS_H
