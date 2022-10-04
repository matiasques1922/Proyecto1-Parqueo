#include "Parqueo.h"

Parqueo::Parqueo(int n) {
	vecP = new InfoDelCampo * [n];
	cant = 0;
	tam = 0;
	for (int i = 0; i < n; i++)
		vecP[i] = NULL;
}
Parqueo:: ~Parqueo() {
	if (vecP != NULL)
		delete vecP;
}

int Parqueo::getCant() { return cant; }
int Parqueo::getTam() { return tam; }

string Parqueo::toString() {
	stringstream s;
	s << "-------------PARQUEO----------------" << endl;
	for (int i = 0; i < cant; i++)
		s << vecP[i]->toString() << endl;
	return s.str();
}