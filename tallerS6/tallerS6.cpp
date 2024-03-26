#include <iostream>
#include "Registro.h"
#include "Vehiculo.h"
#include "Automovil.h"
#include "Motocicleta.h"
#include "AdminVehiculos.h"
using namespace std;

int main()
{
    AdminVehiculos* admin = new AdminVehiculos();
    Registro* r1 = new Registro("HUP9954", "Negro");
    Registro* r2 = new Registro("BAA5412", "Azul");
    Registro* r3 = new Registro("HCC4573", "Blanco");
    Automovil* a1 = new Automovil("Toyota", 2020, r1, "Corolla");
    Motocicleta* m = new Motocicleta("Yamaha", 2018, r2, 300);
    Automovil* a2 = new Automovil("Honda", 2021, r3, "CR-V");
    admin->agregarVehiculos(a1);
    admin->agregarVehiculos(m);
    admin->agregarVehiculos(a2);
    admin->mostrarVehiculos();
    delete admin;
    cout << "Finalizado!" << endl;
    return 0;
}

