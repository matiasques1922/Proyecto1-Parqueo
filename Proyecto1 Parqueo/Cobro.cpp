//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
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
	s << "---------------Cobro------------------" << endl
		<< "La hora de entrada fue: " << horaPtr->getHora() << endl
		<< "La hora de salida fue: " << horaSPtr->getHoraS() << endl
		<< "El cobro total es: " << total << " colones" << endl
		<< "--------------------------------------" << endl;

	return s.str();
} 

