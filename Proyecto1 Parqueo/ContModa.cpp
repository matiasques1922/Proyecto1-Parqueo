
//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
#include "ContModa.h"

ContModa::ContModa() {
	cant = 0;
	tam = 100;
	for (int i = 0; i < tam; i++)
		vec[i] = NULL;
}
ContModa:: ~ContModa() {
	for (int i = 0; i < cant; i++)
		delete vec[i];
}

int ContModa::getCant() { return cant; }

bool ContModa::ingresaVehiculo2(Vehiculo* vehiculoPtr) {
	if (cant < tam) {
		vec[cant++] = vehiculoPtr;
		return true;
	}
	else
		return false;
}

double ContModa::moda() {
	int aux1 = 0;
	int aux2 = 0;
	double masUso = 0;
	for (int i = 0; i < cant; i++) {
		for (int j = 0; j < cant; j++) {
			if (vec[i]->getTonelaje() == vec[j]->getTonelaje() && i != j)
				aux1++;
		}
		if (aux1 > aux2) {
			aux2 = aux1;
			masUso = vec[i]->getTonelaje();
		}
		aux1 = 0;
	}
	return masUso;
}

string ContModa::tonelaje() {
	stringstream s;
		s << "Solo existe un vehiculo por lo que el tonelaje mas usado es: " << vec[0]->getTonelaje();
		return s.str();
}

string ContModa::toString() {
	stringstream s;
	s << "----------Lista De Vehiculos que han pasado por el parqueo----------" << endl;
	for (int i = 0; i < cant; i++)
		s << vec[i]->toString() << endl << endl;
	return s.str();

}