//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
#include "Chofer.h"

Chofer::Chofer(){
	cedula = "indefinido";
	nombre = "indefinido";
}
Chofer::Chofer(string ced, string nom){
	cedula = ced;
	nombre = nom;
}
Chofer::~Chofer(){}

string Chofer::getCedula() { return cedula; }
string Chofer::getNombre() { return nombre; }

void Chofer::setCedula(string ced) { cedula = ced; }
void Chofer::setNombre(string nom) { nombre = nom; }

string Chofer::toString(){
	stringstream s;
	s << "--------------Chofer-----------------" << endl
		<< "Nombre: " << nombre << endl
		<< "Cedula: " << cedula << endl;
	return s.str();
}