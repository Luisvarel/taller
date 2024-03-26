#include "Vehiculo.h"

Vehiculo::Vehiculo(){

}

Vehiculo::Vehiculo(string m, int y, Registro* r) {
	this->marca = m;
	this->year = y;
	this->registro = r;
}

Vehiculo::~Vehiculo() {
	this->marca = "";
	this->year = 0;
	delete this->registro;
}

string Vehiculo::getMarca() {
	return this->marca;
}

void Vehiculo::setMarca(string m) {
	this->marca = m;
}

int Vehiculo::getYear() {
	return this->year;
}

void Vehiculo::setYear(int y) {
	this->year = y;
}

Registro* Vehiculo::getRegistro() {
	return this->registro;
}

void Vehiculo::setRegistro(Registro* r) {
	this->registro = r;
}