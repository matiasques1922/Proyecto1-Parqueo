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

	string toString();
};

