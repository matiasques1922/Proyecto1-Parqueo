#include "Vehiculo.h"

Vehiculo::Vehiculo() {
	marca = "indefinido";
	placa = "indefinido";
	tonelaje = 0;
	color = "indefinido";
	choferPtr = NULL;
	cobroPtr = NULL;
}
Vehiculo::Vehiculo(string mar, string pla, double ton, string col, Chofer* cPtr, Cobro* coPtr) {
	marca = mar;
	placa = pla;
	tonelaje = ton;
	color = col;
	choferPtr = cPtr;
	cobroPtr = coPtr;
}
Vehiculo::~Vehiculo() {
	if (choferPtr != NULL)
		delete choferPtr;
	if (cobroPtr != NULL)
		delete cobroPtr;
}

string Vehiculo::getMarca(){return marca; }
string Vehiculo::getPlaca() { return placa; }
double Vehiculo::getTonelaje() { return tonelaje; }
string Vehiculo::getColor() { return color; }
Chofer* Vehiculo::getChofer() { return choferPtr; }
Cobro* Vehiculo::getCobro() { return cobroPtr; }

void Vehiculo::setMarca(string mar) { marca = mar; }
void Vehiculo::setPlaca(string pla){ placa = pla; }
void Vehiculo::setTonelaje(double ton){ tonelaje = ton; }
void Vehiculo::setColor(string col){ color = col; }
void Vehiculo::setChofer(Chofer* cPtr){ choferPtr = cPtr; }
void Vehiculo::setCobro(Cobro* coPtr){ cobroPtr = coPtr; }

string Vehiculo::toString(){
	stringstream s;
	s << "--------------Vehiculo----------------" << endl
		<< "Marca: " << marca << endl
		<< "Placa: " << placa << endl
		<< "Tonelaje: " << tonelaje << endl
		<< "Color: " << color << endl;
	if (choferPtr != NULL) {
		s << choferPtr->toString() << endl;
	}
	if (cobroPtr != NULL) {
		s << cobroPtr->toString() << endl;
	}
	return s.str();
		

}