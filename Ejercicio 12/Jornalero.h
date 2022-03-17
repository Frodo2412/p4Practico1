//
// Created by bruno on 3/17/2022.
//

#ifndef PRACTICO_1_JORNALERO_H
#define PRACTICO_1_JORNALERO_H

#include "Empleado.h"

class Jornalero: public Empleado {
private:
    float jornal;
    int horas;
public:
    Jornalero(std::string, float, int);
    float getJornal();
    int getHoras();
    float darLiquidacion() override;
};


#endif //PRACTICO_1_JORNALERO_H
