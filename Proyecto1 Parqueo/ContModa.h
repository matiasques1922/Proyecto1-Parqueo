//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
#pragma once
#include"Vehiculo.h"

class ContModa
{
private:
	Vehiculo* vec[100];
	int cant;
	int tam;

public:
	ContModa();
	virtual ~ContModa();

	int getCant();
	bool ingresaVehiculo2(Vehiculo*);
	double moda();

	string toString();
};