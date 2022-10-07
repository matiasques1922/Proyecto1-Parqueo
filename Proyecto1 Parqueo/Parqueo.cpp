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

void Parqueo::vehiculoPago(string pla) {
	for (int i = 0; i < tam; i++) {
		if (vecP[i]->vehiculoPago(pla) == true) 
			vecP[i]->setEstado('L');
	}
}

string Parqueo::case1() {
	stringstream s;
	s << "------------------PARQUEO---------------------" << endl
		<< "Tamano del parqueo: " << tam << " campos" << endl
		<< "----------------------------------------------" << endl << endl;
	for (int i = 0; i < tam; i++)
		s << vecP[i]->case1() << endl;
	return s.str();
}

string Parqueo::case2() {
	stringstream s;
	s << "------------------PARQUEO---------------------" << endl
		<< "Tamano del parqueo: " << tam << " campos" << endl
		<< "----------------------------------------------" << endl << endl;
	for (int i = 0; i < tam; i++)
		s << vecP[i]->case2() << endl;
	return s.str();
}

string Parqueo::case3() {
	stringstream s;
	s << "------------------PARQUEO---------------------" << endl
		<< "Tamano del parqueo: " << tam << " campos" << endl
		<< "----------------------------------------------" << endl << endl;
	for (int i = 0; i < tam; i++)
		s << vecP[i]->case3() << endl;
	return s.str();
}

void Parqueo::case4() {
	double hora, horaS;
	string cedula;
	string nombre;
	double total = 0;
	string marca;
	string placa;
	double tonelaje;
	string color;
	int cant2;
	int tam2;
	int j;
	int numeroCampo;
	char estado = 'L';
	char letra = 's';
	char pago = 'N';
	Hora* horaPtr;
	HoraS* horaSPtr;
	Chofer* chofPtr;
	Cobro* cobroPtr;
	Vehiculo* vehiPtr;
	ContVehiculos* contPtr = new ContVehiculos();

	//A QUE POSICION SE QUIERE INGRESAR EL VEHICULO??????
	while (letra == 's') {
		
			cout << "Existen " << tam << " campos" << endl << endl;
			cout << "En que numero de campo desea estacionarse?" << endl;
			cin >> numeroCampo;
			j = numeroCampo - 1;
			
			if (vecP[j]->getEstado() == 'L') {
				system("cls");
				cout << "-----------Ingreso de vehiculos-----------" << endl;
				cout << "------------------------------------------" << endl;
				cout << endl;
				cout << "Ingresando horas... En formato de 24 horas" << endl;
				cout << "Ingrese la hora de llegada: ";
				cin >> hora;
				cout << hora << ":00" << endl;
				
				horaPtr = new Hora(hora);
				cout << endl;
				cout << "Ingrese la hora de salida: ";
				cin >> horaS;
				cout << horaS << ":00" << endl;
				
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
				cout << endl;

				vehiPtr = new Vehiculo(marca, placa, tonelaje, color, pago, chofPtr, cobroPtr);
				
				vehiPtr->realizarCobro(horaPtr, horaSPtr);
				vecP[j]->setContVehiculos(contPtr);
				if (vecP[j]->ingresaVehiculo(vehiPtr)) {
					cout << "El vehiculo se ingreso con exito" << endl << endl;
					vecP[j]->setEstado('O');
					cout << "El campo " << numeroCampo << " ahora esta ocupado 'O'" << endl;
					letra = 'n';
				}
				else
					cout << "No se ingreso el vehiculo" << endl;

				system("pause");
			}
			else {
				system("cls");
				cout << "En este campo no puede estacionarse" << endl;
				cout << "Desea intentarlo de nuevo? s/n" << endl;
				cin >> letra;
			}
		}
}

string Parqueo::case5(string pla) {
	stringstream s;
	for (int i = 0; i < tam; i++)
	s << vecP[i]->case5(pla) << endl;
	return s.str();
}

string Parqueo::case6() {
	stringstream s;
	s << "------------------PARQUEO---------------------" << endl
		<< "Tamano del parqueo: " << tam << " campos" << endl
		<< "----------------------------------------------" << endl << endl;
	for (int i = 0; i < tam; i++)
		s << vecP[i]->case6() << endl;
	return s.str();
}



string Parqueo::toString() {
	stringstream s;
	s << "------------------PARQUEO---------------------" << endl
		<< "Tamano del parqueo: " << tam << " campos" << endl
		<< "----------------------------------------------" << endl << endl;
	for (int i = 0; i < tam; i++)
		s << vecP[i]->toString() << endl;
	return s.str();
}