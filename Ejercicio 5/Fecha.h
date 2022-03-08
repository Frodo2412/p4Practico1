//
// Created by bruno on 3/5/2022.
//

#ifndef PRACTICO_1_FECHA_H
#define PRACTICO_1_FECHA_H


class Fecha {
private:
    int dia, mes, anio;
public:
    Fecha(int dia = 0, int mes = 0, int anio = 0);

    int getDia();
    int getMes();
    int getAnio();

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    void mostrarFecha();

    Fecha avanzar(int dias);
    Fecha retroceder(int dias);
    int diferencia(Fecha fecha);
    bool igual(Fecha fecha);
};


#endif //PRACTICO_1_FECHA_H
