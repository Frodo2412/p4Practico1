//
// Created by bruno on 3/17/2022.
//

#ifndef PRACTICO_1_EMPLEADOCOMUN_H
#define PRACTICO_1_EMPLEADOCOMUN_H

#include "Empleado.h"

class EmpleadoComun : public Empleado {
private:
    float sueldo;
public:
    EmpleadoComun(std::string, float);
    float getSueldo();
    float darLiquidacion() override;
};


#endif //PRACTICO_1_EMPLEADOCOMUN_H
