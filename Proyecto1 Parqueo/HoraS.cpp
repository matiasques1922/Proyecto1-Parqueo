//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
#include "HoraS.h"

HoraS::HoraS() {
	hora = 0;
}
HoraS::HoraS(double h) {
	hora = h;
}
HoraS::~HoraS() {}

double HoraS::getHoraS() { return hora; }
void HoraS::setHoraS(double h) { hora = h; }

string HoraS::toString() {
	stringstream s;
	s << "-----------Hora de Salida-------------" << endl
		<< "Hora: " << hora << ":00" << endl;
	return s.str();
}