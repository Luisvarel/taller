#pragma once
#include "Registro.h"
#include <string>
using namespace std;

class Vehiculo
{
protected:
	string marca = "";
	int year = 0;
	Registro* registro = nullptr;
public:
	Vehiculo();
	Vehiculo(string m, int y, Registro* r);
	~Vehiculo();
	string getMarca();
	void setMarca(string m);
	int getYear();
	void setYear(int y);
	Registro* getRegistro();
	void setRegistro(Registro* r);
	virtual void mostrarDatos() = 0;
};

