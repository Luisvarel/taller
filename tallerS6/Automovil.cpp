#include "Automovil.h"
#include <iostream>
using namespace std;

Automovil::Automovil() {

}

Automovil::Automovil(string m, int y, Registro* r, string mod) : Vehiculo(m, y, r){
	this->modelo = mod;
}

Automovil::~Automovil() {
	this->modelo = "";
}

string Automovil::getModelo() {
	return this->modelo;
}

void Automovil::setModelo(string mod) {
	this->modelo = mod;
}

void Automovil::mostrarDatos() {
	cout << "Marca: " << this->marca << ", Year: " << this->year << ", Modelo: " << this->modelo << endl;
}