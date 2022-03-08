//
// Created by bruno on 3/5/2022.
//

#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

int Fecha::getDia() {
    return this->dia;
}

int Fecha::getMes() {
    return this->mes;
}

int Fecha::getAnio() {
    return this->anio;
}

void Fecha::setDia(int dia) {
    this->dia = dia;
}

void Fecha::setMes(int mes) {
    this->mes = mes;
}

void Fecha::setAnio(int anio) {
    this->anio = anio;
}

void Fecha::mostrarFecha() {
    cout << this->dia << "/" << this->mes << "/" << this->anio << endl;
}

Fecha Fecha::avanzar(int dias) {
    Fecha fecha;
    fecha.setDia((this->dia + dias) % 30);
    fecha.setMes((this->mes + (this->dia + dias) / 30) % 12);
    fecha.setAnio(this->anio + (this->mes + (this->dia + dias) / 30) / 12);
    return fecha;
}

Fecha Fecha::retroceder(int dias) {
    Fecha fecha;
    fecha.setDia((this->dia - dias) % 30);
    fecha.setMes((this->mes - (this->dia - dias) / 30) % 12);
    fecha.setAnio(this->anio - (this->mes - (this->dia - dias) / 30) / 12);
    return fecha;
}

bool Fecha::igual(Fecha fecha) {
    return (this->dia == fecha.getDia() && this->mes == fecha.getMes() && this->anio == fecha.getAnio());
}
