#include "InfoDelCampo.h"

InfoDelCampo::InfoDelCampo(){
	numeroCampo = 0;
	estado = 'L';
	contPtr = NULL;
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

//void InfoDelCampo::ingresaContenedor(ContVehiculos* contPtr) {
//	if (cant < tam) {
//		vec[cant++] = vehiculoPtr;
//		return true;
//	}
//	else
//		return false;
//}

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

