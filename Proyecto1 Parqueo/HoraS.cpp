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
	s << "---------Hora de Salida---------" << endl
		<< "Hora: " << hora << ":00" << endl;
	return s.str();
}