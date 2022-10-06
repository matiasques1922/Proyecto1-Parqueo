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

void Vehiculo::realizarCobro(Hora* horaPtr, HoraS* horaSPtr) {
	/*Si el veh�culo es menor de una tonelada, solo pagar� las horas que estuvo en el parqueo.
		� Si el veh�culo est� entre 1.0 y 1.5 toneladas, se le cobrar� un 5 % m�s en la factura final
		� Si el veh�culo est� entre 1.6 y 3.5 toneladas, se le cobrar� un 10 % m�s en la factura final
		� Si el veh�culo est� entre 3.6 y 5.0 toneladas, se le cobrar� un 15 % m�s en la factura final
		� Si el veh�culo tiene un peso mayor de 5.0 toneladas, se le cobrar� un 20 % m�s en la factura
		final.*/
	if (tonelaje >= 1.0 && tonelaje <= 1.5) {
		double n = 0;
		n = (horaSPtr->getHoraS() - horaPtr->getHora()) * 0.05;
		cobroPtr->setTotal(n);
	}
	if (tonelaje >= 1.6 && tonelaje <= 3.5) {
		double n = 0;
		n = (horaSPtr->getHoraS() - horaPtr->getHora()) * 0.1;
		cobroPtr->setTotal(n);
	}
	if (tonelaje >= 3.6 && tonelaje <= 5.0) {
		double n = 0;
		n = (horaSPtr->getHoraS() - horaPtr->getHora()) * 0.15;
		cobroPtr->setTotal(n);
	}
	if (tonelaje > 5.0) {
		double n = 0;
		n = (horaSPtr->getHoraS() - horaPtr->getHora()) * 0.25;
		cobroPtr->setTotal(n);
	}

}

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