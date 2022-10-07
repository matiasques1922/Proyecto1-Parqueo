#pragma once
#include "Chofer.h"
class Vehiculo
{
private:
	string marca;
	string placa;
	double tonelaje;
	string color;
	char pago;
	Chofer* choferPtr;
	Cobro* cobroPtr;
public:
	Vehiculo();
	Vehiculo(string, string, double, string, char, Chofer*, Cobro*);
	virtual~Vehiculo();

	string getMarca();
	string getPlaca();
	double getTonelaje();
	string getColor();
	char getPago();
	Chofer* getChofer();
	Cobro* getCobro();

	void setMarca(string);
	void setPlaca(string);
	void setTonelaje(double);
	void setColor(string);
	void setPago(char);
	void setChofer(Chofer*);
	void setCobro(Cobro*);

	void realizarCobro(Hora*, HoraS*);
	bool vehiculoPago();
	string case1();
	string case2();
	string case3();
	string case5();
	string case6();

	string toString();

};

