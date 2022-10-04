#pragma once

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Hora
{
private:
	int hora;
public:
	Hora();
	Hora(int);
	virtual~Hora();

	int getHora();
	void setHora(int);

	string toString();
};

