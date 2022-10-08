//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
#include "Vehiculo.h"

Vehiculo::Vehiculo() {
	marca = "indefinido";
	placa = "indefinido";
	tonelaje = 0;
	color = "indefinido";
	pago = 'N';
	choferPtr = NULL;
	cobroPtr = NULL;
}
Vehiculo::Vehiculo(string mar, string pla, double ton, string col, char pa, Chofer* cPtr, Cobro* coPtr) {
	marca = mar;
	placa = pla;
	tonelaje = ton;
	color = col;
	pago = pa;
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
char Vehiculo::getPago() { return pago; }
Chofer* Vehiculo::getChofer() { return choferPtr; }
Cobro* Vehiculo::getCobro() { return cobroPtr; }

void Vehiculo::setMarca(string mar) { marca = mar; }
void Vehiculo::setPlaca(string pla){ placa = pla; }
void Vehiculo::setTonelaje(double ton){ tonelaje = ton; }
void Vehiculo::setColor(string col){ color = col; }
void Vehiculo::setPago(char pa) { pago = pa; }
void Vehiculo::setChofer(Chofer* cPtr){ choferPtr = cPtr; }
void Vehiculo::setCobro(Cobro* coPtr){ cobroPtr = coPtr; }

int Vehiculo::case14() {
	return cobroPtr->getTotal();
}

void Vehiculo::realizarCobro(Hora* horaPtr, HoraS* horaSPtr) {
	/*Si el vehículo es menor de una tonelada, solo pagará las horas que estuvo en el parqueo.
		• Si el vehículo está entre 1.0 y 1.5 toneladas, se le cobrará un 5 % más en la factura final
		• Si el vehículo está entre 1.6 y 3.5 toneladas, se le cobrará un 10 % más en la factura final
		• Si el vehículo está entre 3.6 y 5.0 toneladas, se le cobrará un 15 % más en la factura final
		• Si el vehículo tiene un peso mayor de 5.0 toneladas, se le cobrará un 20 % más en la factura
		final.*/
	if (tonelaje >= 1.0 && tonelaje <= 1.5) {
		double n = 0;
		n = ((horaSPtr->getHoraS() - horaPtr->getHora()) * 800.00) + (((horaSPtr->getHoraS() - horaPtr->getHora()) * 800.00) * 0.05);
		cobroPtr->setTotal(n);
	}
	if (tonelaje >= 1.6 && tonelaje <= 3.5) {
		double n = 0;
		n = ((horaSPtr->getHoraS() - horaPtr->getHora()) * 800.00) + (((horaSPtr->getHoraS() - horaPtr->getHora()) * 800.00) * 0.10);
		cobroPtr->setTotal(n);
	}
	if (tonelaje >= 3.6 && tonelaje <= 5.0) {
		double n = 0;
		n = ((horaSPtr->getHoraS() - horaPtr->getHora()) * 800.00) + (((horaSPtr->getHoraS() - horaPtr->getHora()) * 800.00) * 0.15);
		cobroPtr->setTotal(n);
	}
	if (tonelaje > 5.0) {
		double n = 0;
		n = ((horaSPtr->getHoraS() - horaPtr->getHora()) * 800.00) + (((horaSPtr->getHoraS() - horaPtr->getHora()) * 800.00) * 0.20);
		cobroPtr->setTotal(n);
	}

}

bool Vehiculo::vehiculoPago() {
	if (pago == 'S')
		return true;
	else
		return false;
}

string Vehiculo::case1() {
	stringstream s;
	s << "Placa del vehiculo: " << placa << endl;
	return s.str();
		
}

string Vehiculo::case2() {
	stringstream s;
	s << "Placa del vehiculo: " << placa << endl;
	return s.str();

}

string Vehiculo::case3() {
	stringstream s;
	s << "Placa del vehiculo: " << placa << endl;
	return s.str();

}

void Vehiculo::case5() {
	cout << cobroPtr->toString() << endl;
	
}

string Vehiculo::case6() {
	stringstream s;
	s << "Placa del vehiculo: " << placa << endl;
	return s.str();

}

int Vehiculo::case12(){
	return cobroPtr->getTotal();
}

int Vehiculo::case13() {
	return cobroPtr->getTotal();
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