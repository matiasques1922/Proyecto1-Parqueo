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

bool InfoDelCampo::ingresaContenedor(Vehiculo* vehiPtr) {
		return contPtr->ingresaVehiculo(vehiPtr);
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
	else {
		s << "No hay campos ocupados" << endl;
		return s.str();
	}
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
	else {
		s << "No hay campos en mantenimiento" << endl;
		return s.str();
	}
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
	else {
		s << "No hay campos libres" << endl;
		return s.str();
	}
}


string InfoDelCampo::toString(){
	stringstream s;
	s << "------------Informacion del campo-------------" << endl
		<< "Numero de campo: " << numeroCampo << endl
		<< "Estado del campo: " << estado << endl;
	if (contPtr != NULL) {
		s << "Vehiculos que han estado en este campo: " << endl
			<< contPtr->toString() << endl;
	}
	return s.str();
}

