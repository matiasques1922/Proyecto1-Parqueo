//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
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

