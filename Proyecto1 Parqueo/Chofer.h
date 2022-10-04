#pragma once
#include "Cobro.h"
class Chofer
{
private:
	string cedula;
	string nombre;
public:
	Chofer();
	Chofer(string, string);
	virtual~Chofer();
	string getCedula();
	string getNombre();

	void setCedula(string);
	void setNombre(string);

	string toString();
};

