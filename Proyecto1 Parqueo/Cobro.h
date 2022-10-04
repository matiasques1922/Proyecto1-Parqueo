#pragma once
#include "HoraS.h"

using namespace std;
class Cobro
{
private:
	Hora* horaPtr;
	HoraS* horaSPtr;
	double total;

public:
	Cobro();
	Cobro(Hora*, HoraS*, double);
	virtual ~Cobro();

	Hora* getHora();
	HoraS* getHoraS();
	double getTotal();

	void setTotal(double);
	void setHora(Hora*);
	void setHoraS(HoraS*);

	string toString();

	void realizarCobro();
};

