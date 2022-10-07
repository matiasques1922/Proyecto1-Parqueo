#include "Parqueo.h"

Parqueo::Parqueo(int n) {
	vecP = new InfoDelCampo * [n];
	cant = 0;
	tam = n;
	for (int i = 0; i < n; i++)
		vecP[i] = new InfoDelCampo();
}
Parqueo::~Parqueo() {
	for (int i = 0; i < cant; i++)
		delete vecP[i];
	delete[] vecP;
}

int Parqueo::getCant() { return cant; }
int Parqueo::getTam() { return tam; }
InfoDelCampo* Parqueo::getVec(int i) { return vecP[i]; }

string Parqueo::case1() {
	stringstream s;
	s << "------------------PARQUEO---------------------" << endl
		<< "Tamano del parqueo: " << tam << " campos" << endl << endl;
	for (int i = 0; i < tam; i++)
		s << vecP[i]->case1() << endl;
	return s.str();
}

string Parqueo::case2() {
	stringstream s;
	s << "------------------PARQUEO---------------------" << endl
		<< "Tamano del parqueo: " << tam << " campos" << endl << endl;
	for (int i = 0; i < tam; i++)
		s << vecP[i]->case2() << endl;
	return s.str();
}

string Parqueo::case3() {
	stringstream s;
	s << "------------------PARQUEO---------------------" << endl
		<< "Tamano del parqueo: " << tam << " campos" << endl << endl;
	for (int i = 0; i < tam; i++)
		s << vecP[i]->case3() << endl;
	return s.str();
}

void Parqueo::case4() {
	int hora, horaS;
	string cedula;
	string nombre;
	double total = 0;
	string marca;
	string placa;
	double tonelaje;
	string color;
	int cant2;
	int tam2;
	int numeroCampo;
	char estado = 'L';
	char letra = 's';

	Hora* horaPtr;
	HoraS* horaSPtr;
	Chofer* chofPtr;
	Cobro* cobroPtr;
	Vehiculo* vehiPtr;
	ContVehiculos* contPtr = new ContVehiculos();

	//A QUE POSICION SE QUIERE INGRESAR EL VEHICULO??????

	cout << "-----------Ingreso de vehiculos-----------" << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;
	cout << "Ingresando horas..." << endl;
	cout << "Ingrese la hora de llegada: ";
	cin >> hora;
	horaPtr = new Hora(hora);
	cout << endl;
	cout << "Ingrese la hora de salida: ";
	cin >> horaS;
	horaSPtr = new HoraS(horaS);
	cout << endl;
	cout << "Ingresando informacion del chofer..." << endl;
	cout << "Ingrese la cedula del chofer: ";
	cin >> cedula;
	cout << "Ingrese el nombre del chofer: ";
	cin >> nombre;
	chofPtr = new Chofer(cedula, nombre);
	cout << endl;
	//Cobro
	cobroPtr = new Cobro(horaPtr, horaSPtr, total);
	//
	cout << "Ingresando la informacion del vehiculo..." << endl;
	cout << "Ingrese la marca del vehiculo: ";
	cin >> marca;
	cout << "Ingrese la placa del vehiculo: ";
	cin >> placa;
	cout << "Ingrese el tonelaje del vehiculo: ";
	cin >> tonelaje;
	cout << "Ingrese el color del vehiculo: ";
	cin >> color;

	vehiPtr = new Vehiculo(marca, placa, tonelaje, color, chofPtr, cobroPtr);
	vehiPtr->realizarCobro(horaPtr, horaSPtr);

	for (int i = 0; i < cant; i++)
		if (vecP[i]->ingresaContenedor(vehiPtr))
			cout << "El vehiculo se ingreso con exito" << endl;
		else
			cout << "No se ingreso el vehiculo" << endl;
	system("pause");
}

string Parqueo::case6() {
	stringstream s;
	s << "------------------PARQUEO---------------------" << endl
		<< "Tamano del parqueo: " << tam << " campos" << endl << endl;
	for (int i = 0; i < tam; i++)
		s << vecP[i]->case6() << endl;
	return s.str();
}



string Parqueo::toString() {
	stringstream s;
	s << "------------------PARQUEO---------------------" << endl
		<< "Tamano del parqueo: " << tam << " campos" << endl << endl;
	for (int i = 0; i < tam; i++)
		s << vecP[i]->toString() << endl;
	return s.str();
}