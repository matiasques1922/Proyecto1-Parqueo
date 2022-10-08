//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
#include "InfoDelCampo.h"

InfoDelCampo::InfoDelCampo(){
	numeroCampo = 0;
	estado = 'L';
	contPtr = new ContVehiculos();
}
InfoDelCampo::InfoDelCampo(int nC, char e, ContVehiculos* cPtr){
	numeroCampo = nC;
	estado = e;
	contPtr = cPtr;
}
InfoDelCampo:: ~InfoDelCampo(){
	if (contPtr != NULL)
		delete contPtr;
}

int InfoDelCampo::getNumeroCampo() { return numeroCampo; }
char InfoDelCampo::getEstado() { return estado; }
ContVehiculos* InfoDelCampo::getContVehiculos() { return contPtr; }

void InfoDelCampo::setNumeroCampo(int nC) { numeroCampo = nC; }
void InfoDelCampo::setEstado(char e) { estado = e; }
void InfoDelCampo::setContVehiculos(ContVehiculos* cPtr) { contPtr = cPtr; }

bool InfoDelCampo::ingresaVehiculo(Vehiculo* vehiPtr) {
		return contPtr->ingresaVehiculo(vehiPtr);
}
bool InfoDelCampo::vehiculoPago(string pla) {
	if (contPtr->vehiculoPago(pla) == true)
		return true;
	else
		return false;
}

string InfoDelCampo::case1() {
	stringstream s;
		s << "------------Informacion del campo-------------" << endl
			<< "Numero de campo: " << numeroCampo << endl
			<< "Estado del campo: " << estado << endl;
		if (contPtr != NULL) {
			s << "Vehiculos que han estado en este campo: " << endl
				<< contPtr->case1() << endl;
		}
		return s.str();
}


string InfoDelCampo::case2() {
	stringstream s;
	if (estado == 'O') {
		s << "------------Informacion del campo-------------" << endl
			<< "Numero de campo: " << numeroCampo << endl
			<< "Estado del campo: " << estado << endl;
		if (contPtr != NULL) {
			s << "Vehiculos que han estado en este campo: " << endl
				<< contPtr->case2() << endl;
		}
		return s.str();
	}
	return s.str();
}

string InfoDelCampo::case3() {
	stringstream s;
	if (estado == 'M') {
		s << "------------Informacion del campo-------------" << endl
			<< "Numero de campo: " << numeroCampo << endl
			<< "Estado del campo: " << estado << endl;
		if (contPtr != NULL) {
			s << "Vehiculos que han estado en este campo: " << endl
				<< contPtr->case2() << endl;
		}
		return s.str();
	}
	return s.str();
}

void InfoDelCampo::case5(string pla) {
	contPtr->case5(pla);
}

string InfoDelCampo::case6() {
	stringstream s;
	if (estado == 'L') {
		s << "------------Informacion del campo-------------" << endl
			<< "Numero de campo: " << numeroCampo << endl
			<< "Estado del campo: " << estado << endl;
		if (contPtr != NULL) {
			s << "Vehiculos que han estado en este campo: " << endl
				<< contPtr->case2() << endl;
		}
		return s.str();
	}
	return s.str();
}

int InfoDelCampo::case11() {
	return contPtr->getCant();
}

int InfoDelCampo::case12() {
	return contPtr->case12();
}

int InfoDelCampo::case13() {
	return contPtr->case13();
}
void InfoDelCampo::case14() {
	contPtr->case14();
}

void InfoDelCampo::case18() {
	contPtr->case18();
}

string InfoDelCampo::toString(){
	stringstream s;
	s << "--------Informacion Del Campo---------" << endl
		<< "Numero de campo: " << numeroCampo << endl
		<< "Estado del campo: " << estado << endl;
	if (contPtr != NULL) {
		s << "Vehiculos que se han parqueado: " << endl
			<< contPtr->toString() << endl;
	}
	return s.str();
}

