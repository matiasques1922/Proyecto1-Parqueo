#include "Parqueo.h"

Parqueo::Parqueo(int n) {
	vecP = new InfoDelCampo * [n];
	cant = 0;
	tam = n;
	for (int i = 0; i < n; i++)
		vecP[i] = NULL;
}
Parqueo:: ~Parqueo() {
	for (int i = 0; i < cant; i++)
		delete vecP[i];
	delete[] vecP;
}

int Parqueo::getCant() { return cant; }
int Parqueo::getTam() { return tam; }



void Parqueo::creaParqueo() {
	/*La aplicación automáticamente cuando “arranca”, solicitará el nombre, el teléfono y la
		dirección física del Mall Multiplaza Escazú, (lo anterior es opcional), además solicitará el
		número n de campos que tiene el parqueo*/
	

}

string Parqueo::toString() {
	stringstream s;
	s << "-------------PARQUEO----------------" << endl
		<< "Tamano del parqueo: " << tam << endl;
	for (int i = 0; i < cant; i++)
		s << vecP[i]->toString() << endl;
	return s.str();
}