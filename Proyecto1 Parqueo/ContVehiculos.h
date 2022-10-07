#pragma once
#include"Vehiculo.h"

class ContVehiculos
{
private:
	Vehiculo* vec[10];
	int cant;
	int tam;

public:
	ContVehiculos();
	virtual ~ContVehiculos();

	bool ingresaVehiculo(Vehiculo*);
	bool vehiculoPago(string pla);
	string case1();
	string case2();
	string case3();
	string case5(string);
	string case6();

	string toString();
};

