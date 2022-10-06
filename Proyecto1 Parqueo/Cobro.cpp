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

