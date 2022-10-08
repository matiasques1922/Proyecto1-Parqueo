//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
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

	int getCant();
	bool ingresaVehiculo(Vehiculo*);
	bool vehiculoPago(string pla);
	string case1();
	string case2();
	string case3();
	string case5(string);
	string case6();
	

	string toString();
};

