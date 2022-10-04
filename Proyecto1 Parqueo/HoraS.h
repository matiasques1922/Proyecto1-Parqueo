#pragma once
#include "Hora.h"
class HoraS
{
private:
	int hora;
public:
	HoraS();
	HoraS(int);
	virtual~HoraS();

	int getHoraS();
	void setHoraS(int);

	string toString();
};

