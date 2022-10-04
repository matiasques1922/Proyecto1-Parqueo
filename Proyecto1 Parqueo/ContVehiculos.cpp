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

bool ContVehiculos::ingresaVehiculo(Vehiculo* vehiculoPtr) {
	if (cant < tam) {
		vec[cant++] = vehiculoPtr;
		return true;
	}
	else
		return false;
}

string ContVehiculos::toString() {
	stringstream s;
	s << "-------------Lista de vehiculos-------------" << endl;
	for (int i = 0; i < cant; i++)
		s << vec[i]->toString() << endl;
	return s.str();

}

