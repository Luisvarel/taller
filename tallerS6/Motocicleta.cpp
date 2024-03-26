#include "Motocicleta.h"
#include <iostream>
using namespace std;

Motocicleta::Motocicleta() {

}

Motocicleta::Motocicleta(string m, int y, Registro* r, int c) : Vehiculo(m, y, r) {
	this->cilindraje = c;
}

Motocicleta::~Motocicleta() {
	this->cilindraje = 0;
}

int Motocicleta::getCilindraje() {
	return this->cilindraje;
}

void Motocicleta::setCilindraje(int c) {
	this->cilindraje = c;
}

void Motocicleta::mostrarDatos() {
	cout << "Marca: " << this->marca << ", Year: " << this->year << ", Cilindraje:" << this->cilindraje << endl;
}