//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
#include "ContVehiculos.h"

ContVehiculos::ContVehiculos() {
	cant = 0;
	tam = 10;
	for (int i = 0; i < tam; i++)
		vec[i] = NULL;
}
ContVehiculos:: ~ContVehiculos() {
	for (int i = 0; i < cant; i++)
		delete vec[i];
}

int ContVehiculos::getCant() { return cant; }

bool ContVehiculos::ingresaVehiculo(Vehiculo* vehiculoPtr) {
	if (cant < tam) {
		vec[cant++] = vehiculoPtr;
		return true;
	}
	else
		return false;
}

bool ContVehiculos::vehiculoPago(string pla) {
	for (int i = 0; i < cant; i++)
		if (vec[i]->getPlaca() == pla && vec[i]->vehiculoPago() == true)
			return true;
		else
			return false;
}

string ContVehiculos::case1() {
	stringstream s;
	s << "-------------Lista de vehiculos-------------" << endl;
	for (int i = 0; i < cant; i++)
		s << vec[i]->case1() << endl;
	return s.str();

}

string ContVehiculos::case2() {
	stringstream s;
	s << "-------------Lista de vehiculos-------------" << endl;
	for (int i = 0; i < cant; i++)
		s << vec[i]->case2() << endl;
	return s.str();

}

string ContVehiculos::case3() {
	stringstream s;
	s << "-------------Lista de vehiculos-------------" << endl;
	for (int i = 0; i < cant; i++)
		s << vec[i]->case3() << endl;
	return s.str();

}

string ContVehiculos::case5(string pla) {
	stringstream s;
	for (int i = 0; i < cant; i++)
		if (vec[i]->getPlaca() == pla) {
			vec[i]->setPago('S');
			s << vec[i]->case5() << endl;
		}
	return s.str();

}

string ContVehiculos::case6() {
	stringstream s;
	s << "-------------Lista de vehiculos-------------" << endl;
	for (int i = 0; i < cant; i++)
		s << vec[i]->case6() << endl;
	return s.str();

}

string ContVehiculos::toString() {
	stringstream s;
	s << "----------Lista De Vehiculos----------" << endl;
	for (int i = 0; i < cant; i++)
		s << vec[i]->toString() << endl;
	return s.str();

}

