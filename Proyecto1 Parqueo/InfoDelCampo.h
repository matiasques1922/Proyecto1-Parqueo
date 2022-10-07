#pragma once
#include "ContVehiculos.h"
class InfoDelCampo
{
private:
	int numeroCampo;
	char estado;
	ContVehiculos* contPtr;

public:
	InfoDelCampo();
	InfoDelCampo(int, char, ContVehiculos*);
	virtual ~InfoDelCampo();

	int getNumeroCampo();
	char getEstado();
	ContVehiculos* getContVehiculos();

	void setNumeroCampo(int);
	void setEstado(char);
	void setContVehiculos(ContVehiculos*);

	bool ingresaVehiculo(Vehiculo*);
	bool vehiculoPago(string);

	string case1();
	string case2();
	string case3();
	string case5(string);
	string case6();

	
	string toString();
	

};

