#pragma once
#include "Vehiculo.h"
#include <vector>

class AdminVehiculos
{
private:
	vector<Vehiculo*> vehiculos;
	
public:
	AdminVehiculos();
	~AdminVehiculos();
	void agregarVehiculos(Vehiculo* v);
	void mostrarVehiculos();
};

