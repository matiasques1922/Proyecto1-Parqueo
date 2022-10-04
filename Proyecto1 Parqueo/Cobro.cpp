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
	/*Si el veh�culo es menor de una tonelada, solo pagar� las horas que estuvo en el parqueo.
		� Si el veh�culo est� entre 1.0 y 1.5 toneladas, se le cobrar� un 5 % m�s en la factura final
		� Si el veh�culo est� entre 1.6 y 3.5 toneladas, se le cobrar� un 10 % m�s en la factura final
		� Si el veh�culo est� entre 3.6 y 5.0 toneladas, se le cobrar� un 15 % m�s en la factura final
		� Si el veh�culo tiene un peso mayor de 5.0 toneladas, se le cobrar� un 20 % m�s en la factura
		final.*/


}