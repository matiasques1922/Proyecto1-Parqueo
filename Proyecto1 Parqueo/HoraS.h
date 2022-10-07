#pragma once
#include "Hora.h"
class HoraS
{
private:
	double hora;
public:
	HoraS();
	HoraS(double);
	virtual~HoraS();

	double getHoraS();
	void setHoraS(double);

	string toString();
};

