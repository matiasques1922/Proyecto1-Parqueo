#include "Hora.h"

Hora::Hora(){
	hora = 0;
}
Hora::Hora(int h){
	hora = h;
}
Hora::~Hora(){}

int Hora::getHora() { return hora; }
void Hora::setHora(int h) { hora = h; }

string Hora::toString(){
	stringstream s;
	s << "---------Hora de Entrada---------" << endl
		<< "Hora: " << hora << ":00" << endl;
	return s.str();
}