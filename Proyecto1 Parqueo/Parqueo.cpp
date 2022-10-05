#include "Parqueo.h"

Parqueo::Parqueo(int n) {
	vecP = new InfoDelCampo * [n];
	cant = 0;
	tam = n;
	for (int i = 0; i < n; i++)
		vecP[i] = NULL;
}
Parqueo::~Parqueo() {
	for (int i = 0; i < cant; i++)
		delete vecP[i];
	delete[] vecP;
}

int Parqueo::getCant() { return cant; }
int Parqueo::getTam() { return tam; }


void Parqueo::mantenimiento() {
	char letra;
	string nombre;
	string numero;
	string direccion;
	
	cout << "------------Creacion del Mall y su Parqueo-----------" << endl;
	cout << "------------------------------------------------------" << endl << endl;
	cout << "Ingrese el nombre del Mall: ";
	cin >> nombre;
	cout << "Ingrese el numero telefonico del Mall: ";
	cin >> numero;
	cout << "Ingrese la direccion fisica del Mall: ";
	cin >> direccion;
	cout << "Ingrese el numero de campos que tendra el parqueo del Mall: ";
	cin >> tam;
	Parqueo* parqueoPtr = new Parqueo(tam);
		for (int i = 0; i < tam; i++) {
			
			cout << "Desea colocar el campo numero: " << vecP[i]->getNumeroCampo() << " en mantenimiento? s/n";
			cin >> letra;
			if (letra == 's') {
				vecP[i]->setEstado('M');
				cout << "El campo: " << vecP[i]->getNumeroCampo() << " se coloco en mantenimiento" << endl;
			}
		}
	
}


string Parqueo::toString() {
	stringstream s;
	s << "-------------PARQUEO----------------" << endl
		<< "Tamano del parqueo: " << tam << endl;
	for (int i = 0; i < cant; i++)
		s << vecP[i]->toString() << endl;
	return s.str();
}