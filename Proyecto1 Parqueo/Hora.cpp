//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
#include "Hora.h"

Hora::Hora(){
	hora = 0;
}
Hora::Hora(double h){
	hora = h;
}
Hora::~Hora(){}

double Hora::getHora() { return hora; }
void Hora::setHora(double h) { hora = h; }

string Hora::toString(){
	stringstream s;
	s << "-----------Hora de Entrada------------" << endl
		<< "Hora: " << hora << ":00" << endl;
	return s.str();
}