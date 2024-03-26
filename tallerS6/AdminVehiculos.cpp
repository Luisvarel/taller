#include "AdminVehiculos.h"
#include <iostream>
using namespace std;

AdminVehiculos::AdminVehiculos() {

}

AdminVehiculos::~AdminVehiculos() {
	for (int i = 0; i < this->vehiculos.size(); i++) {
		delete this->vehiculos[i];
	}
	this->vehiculos.clear();
}

void AdminVehiculos::agregarVehiculos(Vehiculo* v) {
	this->vehiculos.push_back(v);
}

void AdminVehiculos::mostrarVehiculos() {
	for (int i = 0; i < this->vehiculos.size(); i++) {
		this->vehiculos[i]->mostrarDatos();
		this->vehiculos[i]->getRegistro()->mostrarRegistro();
		cout << endl << endl;
	}
}