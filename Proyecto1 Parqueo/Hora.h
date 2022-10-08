//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
#pragma once

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Hora
{
private:
	double hora;
public:
	Hora();
	Hora(double);
	virtual~Hora();

	double getHora();
	void setHora(double);

	string toString();
};

