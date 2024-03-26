#include "Registro.h"
#include <iostream>
using namespace std;

Registro::Registro() {

}

Registro::Registro(string p, string c) {
	this->placa = p;
	this->color = c;
}

Registro::~Registro() {
	this->placa = "";
	this->color = "";
}

string Registro::getPlaca() {
	return this->placa;
}

void Registro::setPlaca(string p) {
	this->placa = p;
}

string Registro::getColor() {
	return this->color;
}

void Registro::setColor(string c) {
	this->color = c;
}

void Registro::mostrarRegistro() {
	cout << "Placa: " << this->placa << ", Color: " << this->color << endl;
}
