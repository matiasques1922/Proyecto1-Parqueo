#pragma once
#include "Chofer.h"
class Vehiculo
{
private:
	string marca;
	string placa;
	double tonelaje;
	string color;
	Chofer* choferPtr;
	Cobro* cobroPtr;
public:
	Vehiculo();
	Vehiculo(string, string, double, string, Chofer*, Cobro*);
	virtual~Vehiculo();

	string getMarca();
	string getPlaca();
	double getTonelaje();
	string getColor();
	Chofer* getChofer();
	Cobro* getCobro();

	void setMarca(string);
	void setPlaca(string);
	void setTonelaje(double);
	void setColor(string);
	void setChofer(Chofer*);
	void setCobro(Cobro*);

	void realizarCobro(Hora*, HoraS*);

	string toString();

};

