//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
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
	void case5(string);
	string case6();
	int case11();
	double case12();
	double case13();
	double case14();
	void case18();

	
	string toString();
	

};

