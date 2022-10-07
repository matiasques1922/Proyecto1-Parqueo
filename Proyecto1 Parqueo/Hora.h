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

