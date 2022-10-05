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


void Parqueo:: creaParqueo() {
	char letra;
	string nombre;
	string numero;
	string direccion;
	
	char estado = 'L';
	int numeroCampo = 0;
	int mantenimiento;
	ContVehiculos* contPtr = new ContVehiculos();
	
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
	cout << parqueoPtr->toString() << endl;
	
	cout << "Cuantos de los " << tam << "campos estaran en mantenimiento?";
	cin >> mantenimiento;
	
}

//metodo que me estoy inventando porque estoy fliping
void Parqueo::creaVehiculo() {
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
	


	/*while (letra == 's') {*/
		cout << "Tamano del parqueo: " << tam << " campos" << endl;
		
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

		if (contPtr->ingresaVehiculo(vehiPtr))
			cout << "El vehiculo se ingreso con exito" << endl;
		else
			cout << "No se ingreso el vehiculo" << endl;
		system("pause");
		
		/*cout << "Desea ingresar otro vehiculo al sistema? s/n";
		cin >> letra;*/
	}





string Parqueo::toString() {
	stringstream s;
	s << "-------------PARQUEO----------------" << endl
		<< "Tamano del parqueo: " << tam << endl;
	for (int i = 0; i < cant; i++)
		s << vecP[i]->toString() << endl;
	return s.str();
}