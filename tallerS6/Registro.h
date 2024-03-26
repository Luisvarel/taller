#pragma once
#include <string>
using namespace std;

class Registro
{
private:
	string placa = "";
	string color = "";

public:
	Registro();
	Registro(string p, string c);
	~Registro();
	string getPlaca();
	void setPlaca(string p);
	string getColor();
	void setColor(string c);
	void mostrarRegistro();
};

