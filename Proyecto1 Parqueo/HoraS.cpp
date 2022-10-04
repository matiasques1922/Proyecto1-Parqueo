#include "HoraS.h"

HoraS::HoraS() {
	hora = 0;
}
HoraS::HoraS(int h) {
	hora = h;
}
HoraS::~HoraS() {}

int HoraS::getHoraS() { return hora; }
void HoraS::setHoraS(int h) { hora = h; }

string HoraS::toString() {
	stringstream s;
	s << "---------Hora de Salida---------" << endl
		<< "Hora: " << hora << ":00" << endl;
	return s.str();
}