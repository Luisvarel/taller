#pragma once
#include "Vehiculo.h"
class Motocicleta : public Vehiculo
{
private:
	int cilindraje = 0;

public:
	Motocicleta();
	Motocicleta(string m, int y, Registro* r, int c);
	~Motocicleta();
	int getCilindraje();
	void setCilindraje(int c);
	void mostrarDatos();
};

