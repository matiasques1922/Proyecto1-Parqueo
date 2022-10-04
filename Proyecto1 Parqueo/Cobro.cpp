#include "Cobro.h"
Cobro::Cobro() {
	horaPtr = NULL;
	horaSPtr = NULL;
	total = 0;
}
Cobro::Cobro(Hora* hPtr, HoraS* hSPtr, double t) {
	horaPtr = hPtr;
	horaSPtr = hSPtr;
	total = t;
}
Cobro:: ~Cobro() {
	if (horaPtr != NULL)
		delete horaPtr;
	if (horaSPtr != NULL)
		delete horaSPtr;
}

Hora* Cobro::getHora() { return horaPtr; }
HoraS* Cobro::getHoraS() { return horaSPtr; }
double Cobro::getTotal() { return total; }

void Cobro::setTotal(double t) { total = t; }
void Cobro::setHora(Hora* hPtr) {
	if (horaPtr != NULL) delete horaPtr;
	horaPtr = hPtr;
}
void Cobro::setHoraS(HoraS* hSPtr) {
	if (horaSPtr != NULL) delete horaSPtr;
	horaSPtr = hSPtr;
}

string Cobro::toString() {
	stringstream s;
	s << "----------Cobro------------"<< endl
		<< "El cobro total es: " << total << " colones" << endl;
	return s.str();
} 

void Cobro::realizarCobro() {
	/*Si el vehículo es menor de una tonelada, solo pagará las horas que estuvo en el parqueo.
		• Si el vehículo está entre 1.0 y 1.5 toneladas, se le cobrará un 5 % más en la factura final
		• Si el vehículo está entre 1.6 y 3.5 toneladas, se le cobrará un 10 % más en la factura final
		• Si el vehículo está entre 3.6 y 5.0 toneladas, se le cobrará un 15 % más en la factura final
		• Si el vehículo tiene un peso mayor de 5.0 toneladas, se le cobrará un 20 % más en la factura
		final.*/


}