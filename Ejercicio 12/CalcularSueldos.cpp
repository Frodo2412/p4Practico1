//
// Created by bruno on 3/17/2022.
//

#include <iostream>
#include "ColEmpleados.h"
#include "EmpleadoComun.h"
#include "Jornalero.h"

using namespace std;

int main() {
    ColEmpleados empleados;
    int opcion = 0;
    do {
        cout << "Ingresar Opción \n" << "0 - Salir \n" << "1 - Ingresar Empleado \n"
             << "2 - Calcular Liquidacion \n";
        cin >> opcion;

        switch (opcion) {
            case 0:
                break;
            case 1: {
                string nom;
                int tipoEmp;
                cout << "Ingrese Nombre:\n";
                cin >> nom;
                cout << "Ingrese Tipo de Empleado (1- Comun, 2- Jornalero):\n";
                cin >> tipoEmp;
                switch (tipoEmp) {
                    case 1:
                        float sueldo;
                        cout << "Ingrese Sueldo: ";
                        cin >> sueldo;
                        empleados.agregarEmpleado(new EmpleadoComun(nom, sueldo));
                        break;
                    case 2:
                        int horas;
                        float valorHora;
                        cout << "Ingrese Horas:\n";
                        cin >> horas;
                        cout << "Ingrese Valor Hora:\n";
                        cin >> valorHora;
                        empleados.agregarEmpleado(new Jornalero(nom, valorHora, horas));
                        break;
                    default:
                        cout << "Ingreso Incorrecto\n";
                        break;
                }
                break;
            }
            case 2: {
                float totalSueldos = empleados.calcularLiquidacion();
                cout << "Total Sueldos: " << totalSueldos << endl;
                break;
            }
            default:
                break;
        }
    } while (opcion != 0);
}