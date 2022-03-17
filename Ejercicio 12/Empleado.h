//
// Created by bruno on 3/17/2022.
//

#ifndef PRACTICO_1_EMPLEADO_H
#define PRACTICO_1_EMPLEADO_H

#include <string>

using namespace std;

class Empleado {
private:
    string nombre;
public:
    explicit Empleado(string);
    string getNombre();
    virtual float darLiquidacion() = 0;
};


#endif //PRACTICO_1_EMPLEADO_H
