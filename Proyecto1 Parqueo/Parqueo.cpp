//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
#include "Parqueo.h"

Parqueo::Parqueo(int n) {
	vecP = new InfoDelCampo * [n];
	cant = 0;
	tam = n;
	contMPtr = new ContModa();
	for (int i = 0; i < n; i++)
		vecP[i] = new InfoDelCampo();
}
Parqueo::~Parqueo() {
	for (int i = 0; i < cant; i++)
		delete vecP[i];
	delete[] vecP;

	if (contMPtr != NULL)
		delete contMPtr;
}

int Parqueo::getCant() { return cant; }
int Parqueo::getTam() { return tam; }
InfoDelCampo* Parqueo::getVec(int i) { return vecP[i]; }
ContModa* Parqueo::getCont() { return contMPtr; }

void Parqueo::vehiculoPago(string pla) {
	for (int i = 0; i < tam; i++) {
		if (vecP[i]->vehiculoPago(pla) == true) {
			vecP[i]->setEstado('L');
			cout << "Su campo ahora esta libre" << endl;
			break;
		}
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

//void Parqueo::case4() {
//	
//}

void Parqueo::case5(string pla) {

	for (int i = 0; i < tam; i++)
		vecP[i]->case5(pla);
	
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

void Parqueo::case7() {
	int cantidadDeVehiculos = 0;
	for (int i = 0; i < tam; i++)
		if (vecP[i]->getEstado() == 'O') {
			cantidadDeVehiculos++;
		}
	cout << "--------------------------------------------------------------------" << endl;
	cout << "En este momento existen: " << cantidadDeVehiculos << " vehiculos en el parqueo" << endl;
	cout << "--------------------------------------------------------------------" << endl;
}

void Parqueo::case8() {
	int cantidadDeCampos = 0;
	for (int i = 0; i < tam; i++)
		if (vecP[i]->getEstado() == 'L') {
			cantidadDeCampos++;
		}
	cout << "--------------------------------------------------------------------" << endl;
	cout << "En este momento existen: " << cantidadDeCampos << " campos libres en el parqueo" << endl;
	cout << "--------------------------------------------------------------------" << endl;
}

void Parqueo::case9() {
	int cantidadDeCampos = 0;
	for (int i = 0; i < tam; i++)
		if (vecP[i]->getEstado() == 'O') {
			cantidadDeCampos++;
		}
	cout << "--------------------------------------------------------------------" << endl;
	cout << "En este momento existen: " << cantidadDeCampos << " campos ocupados en el parqueo" << endl;
	cout << "--------------------------------------------------------------------" << endl;
}

void Parqueo::case10() {
	int cantidadDeCampos = 0;
	for (int i = 0; i < tam; i++)
		if (vecP[i]->getEstado() == 'M') {
			cantidadDeCampos++;
		}
	cout << "--------------------------------------------------------------------" << endl;
	cout << "En este momento existen: " << cantidadDeCampos << " campos en mantenimiento en el parqueo" << endl;
	cout << "--------------------------------------------------------------------" << endl;
}

void Parqueo::case11() {
	int cantidadVehiculos = 0;
	for (int i = 0; i < tam; i++)
		cantidadVehiculos = cantidadVehiculos + vecP[i]->case11();

	cout << "--------------------------------------------------------------------" << endl;
	cout << "Durante el dia han ingresado: " << cantidadVehiculos << " vehiculos" << endl;
	cout << "--------------------------------------------------------------------" << endl;
}

int Parqueo::case12() {
	int total = 0;
	int aux = 0;
	for (int i = 0; i < tam; i++) {
		total = vecP[i]->case12() + aux;
		aux = total;
	}
	return total;
}

void Parqueo::case13() {
	int campos = 1;
	int numeroCampo;
	int j;
	for (int i = 0; i < tam; i++) {
		cout << "Campo numero: " << campos << endl << endl;
		campos++;
	}
	cout << "De que numero de campo desea obtener el total de dinero obtenido durante el dia?" << endl;
	cin >> numeroCampo;
	j = numeroCampo - 1;
	system("cls");
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "El dinero total ingresado el dia de hoy en el campo: "<<numeroCampo<<" es de: " << vecP[j]->case13() << " colones" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
}

void Parqueo::case14() {
	int campos = 1;
	cout << "-----------------------------------------------------------------------------------------------" << endl;
	int cantidadVehiculos = 0;
	for (int i = 0; i < tam; i++) 
		cantidadVehiculos = cantidadVehiculos + vecP[i]->case11();
		if (cantidadVehiculos == 1) {
			cout << contMPtr->tonelaje() << endl;
		}
		else {
			if (contMPtr->moda() != 0) {
				cout << "El tonelaje mas usado en el parqueo es: " << contMPtr->moda() << endl << endl;
			}
			else {
				cout << "No existe un tonelaje mas usado en el parqueo" << endl << endl;
			}
			for (int i = 0; i < tam; i++) {
				if (vecP[i]->case14() != 0)
					cout << "Campo numero: " << campos << ". Tonelaje mas usado: " << vecP[i]->case14() << endl << endl;
				else
					cout << "Campo numero: " << campos << ". No existe un tonelaje mas usado en este campo" << endl << endl;
				campos++;
			}
		}
	cout << "-----------------------------------------------------------------------------------------------" << endl;
	}

void Parqueo::case15() {
	int totalOcupados = 0;
	double porcentaje = 0;
	int campos = 0;

	for (int i = 0; i < tam; i++)
		campos++;
	
	for (int i = 0; i < tam; i++) {
		if (vecP[i]->getEstado() == 'O') {
			totalOcupados++;
		}
	}
	porcentaje = (100 * totalOcupados) / campos;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "El porcentaje de ocupacion del parqueo en este momento es de: " << porcentaje << "%" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
}

void Parqueo::case16(int j) {
	cout << vecP[j]->toString() << endl;

}

void Parqueo::case18() {
	for (int i = 0; i < tam; i++) {
		vecP[i]->case18();
	}

}

string Parqueo::case17() {
	stringstream s;
	s << contMPtr->toString() << endl;
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