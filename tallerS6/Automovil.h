#pragma once
#include "Vehiculo.h"
#include <string>
using namespace std;
class Automovil :
    public Vehiculo
{
private:
    string modelo = "";

public:
    Automovil();
    Automovil(string m, int y, Registro* r, string mod);
    ~Automovil();
    string getModelo();
    void setModelo(string mod);
    void mostrarDatos();
};

