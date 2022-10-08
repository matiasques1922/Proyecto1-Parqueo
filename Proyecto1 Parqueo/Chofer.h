//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
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

