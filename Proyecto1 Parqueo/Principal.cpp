//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297

#include <iostream>
#include <sstream>
#include"Parqueo.h"
using namespace std;



int main() {
	int op = 0;
	string nombre;
	string numero;
	string direccion;
	int tam = 0;
	int cant = 0;
	char mantenimiento;
	Parqueo* parqueoPtr;
	cout << "------------Creacion del Mall y su Parqueo-----------" << endl;
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Ingrese el nombre del Mall: ";
	cin >> nombre;
	cout << "Ingrese el numero telefonico del Mall: ";
	cin >> numero;
	cout << "Ingrese la direccion fisica del Mall: ";
	cin >> direccion;
	cout << "Ingrese el numero de campos que tendra el parqueo del Mall: ";
	cin >> tam;

	parqueoPtr = new Parqueo(tam);

	system("cls");

	cout << "Se creo un parqueo con: " << tam << " campos" << endl;
	cout << endl;

	for (int i = 0; i < tam; i++) {

		parqueoPtr->getVec(i)->setNumeroCampo(i + 1);
		cout << "------------------------------------------------" << endl;
		cout << "---Colocando campo numero: " << parqueoPtr->getVec(i)->getNumeroCampo() << " en mantenimiento---" << endl;
		cout << "------------------------------------------------" << endl << endl;
		cout << "Desea que el campo este en mantenimiento? s/n : ";
		cin >> mantenimiento;
		if (mantenimiento == 's') {
			parqueoPtr->getVec(i)->setEstado('M');
			cout << "Campo colocado en mantenimiento" << endl;
			cout << endl;
		}
		else {
			parqueoPtr->getVec(i)->setEstado('L');
			cout << "Campo colocado como libre" << endl;
			cout << endl;
		}
		system("pause");
		system("cls");
	}
	

	do {
		system("cls");
		cout << "-------------------------------------MENU----------------------------------------" << endl;
		cout << "1. Ver TODOS los campos del parqueo, (solo lugar, estado y placa)" << endl;
		cout << "2. Ver solo los campos que est?n OCUPADOS. (solo lugar, estado y placa)" << endl;
		cout << "3. Ver solo los campos que est?n en MANTENIMIENTO. (solo lugar y estado)" << endl;
		cout << "4. Ingresar un veh?culo al parqueo.Solicitar posici?n o lugar." << endl;
		cout << "5. Cancelar la estancia en el lugar.Realizar el debido cobro del alquiler." << endl;
		cout << "6. Ver solo los campos que est?n LIBRES. (solo lugar y estado)" << endl;
		cout << "7. Saber la cantidad de veh?culos que existen en el parqueo." << endl;
		cout << "8. Saber la cantidad de campos libres en el parqueo." << endl;
		cout << "9. Saber la cantidad de campos ocupados en el parqueo." << endl;
		cout << "10. Saber la cantidad de campos en mantenimiento en el parqueo." << endl;
		cout << "11. Saber la cantidad de veh?culos que han ingresado en el d?a." << endl;
		cout << "12. Saber la cantidad de dinero que ha ingresado al parqueo este d?a." << endl;
		cout << "13. Saber la cantidad de dinero que ha ingresado, por un solo campo." << endl;
		cout << "14. Saber el tonelaje de los veh?culos que hacen m?s uso del parqueo." << endl;
		cout << "15. Saber el porcentaje de ocupaci?n que tiene el parqueo." << endl;
		cout << "16. Mostrar la informaci?n de los veh?culos que han estado en un determinado campo." << endl;
		cout << "17. Mostar la informaci?n de todos(que est?n o no) los veh?culos del parqueo." << endl;
		cout << "18. Mostrar los veh?culos que se encuentran en el rango de tonelaje de 1.0 a 1.5" << endl;
		cout << "19. Salir." << endl;
		cout << "---------------------------------------------------------------------------------" << endl;
		cout << "Digite una opcion: ";
		cin >> op;

		switch (op) {
		case 1: {
			system("cls");
			cout << parqueoPtr->case1() << endl;
			system("pause");
			break;
		}
		case 2: {
			system("cls");
			cout << parqueoPtr->case2() << endl;
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			cout << parqueoPtr->case3() << endl;
			system("pause");
			break;
		}
		case 4: {
			system("cls");
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
			int campos = 1;
			char estado = 'L';
			char letra = 's';
			char pago = 'N';
			Hora* horaPtr;
			HoraS* horaSPtr;
			Chofer* chofPtr;
			Cobro* cobroPtr;
			Vehiculo* vehiPtr;


			//A QUE POSICION SE QUIERE INGRESAR EL VEHICULO??????
			while (letra == 's') {
				system("cls");
				for (int i = 0; i < tam; i++) {
					cout << "Campo numero: " << campos << ". Estado: " << parqueoPtr->getVec(i)->getEstado() << endl << endl;
					campos++;
				}
				cout << "En que numero de campo desea estacionarse?" << endl;
				cin >> numeroCampo;
				j = numeroCampo - 1;

				if (parqueoPtr->getVec(j)->getEstado() == 'L') {
					system("cls");
					cout << "-----------Ingreso de vehiculos-----------" << endl;
					cout << "------------------------------------------" << endl;
					cout << endl;
					cout << "Ingresando horas... En formato de 24 horas(1,2,3...24)" << endl;
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
					parqueoPtr->getCont()->ingresaVehiculo2(vehiPtr);

					if (parqueoPtr->getVec(j)->ingresaVehiculo(vehiPtr)) {
						cout << "El vehiculo se ingreso con exito" << endl << endl;
						parqueoPtr->getVec(j)->setEstado('O');
						cout << "El campo " << numeroCampo << " ahora esta ocupado 'O'" << endl;
						letra = 'n';
					}
					else
						cout << "No se ingreso el vehiculo" << endl;
				}
				else {
					system("cls");
					cout << "En este campo no puede estacionarse" << endl << endl;
					cout << "Desea intentarlo de nuevo? s/n" << endl;
					cin >> letra;
					campos = 1;
				}
			}
			system("pause");
			break;
		}
		case 5: {
			system("cls");
			string placa;
			cout << "-------------------------------------------------------------------------------" << endl;
			cout << "Ingrese la placa del vehiculo que va a pagar su estancia en el parqueo: ";
			cin >> placa;
			cout << "-------------------------------------------------------------------------------" << endl;
			parqueoPtr->case5(placa);
			parqueoPtr->vehiculoPago(placa);
			system("pause");
			break;
		}
		case 6: {
			system("cls");
			cout << parqueoPtr->case6() << endl;
			system("pause");
			break;
		}
		case 7: {
			system("cls");
			parqueoPtr->case7();
			system("pause");
			break;
		}
		case 8: {
			system("cls");
			parqueoPtr->case8();
			system("pause");
			break;
		}
		case 9: {
			system("cls");
			parqueoPtr->case9();
			system("pause");
			break;
		}
		case 10: {
			system("cls");
			parqueoPtr->case10();
			system("pause");
			break;
		}
		case 11: {
			system("cls");
			parqueoPtr->case11();
			system("pause");
			break;
		}
		case 12: {
			system("cls");
			cout << "-------------------------------------------------------------------------------" << endl;
			cout << "El dinero total ingresado el dia de hoy en el parqueo es de: " << parqueoPtr->case12() << " colones" << endl;
			cout << "-------------------------------------------------------------------------------" << endl;
			system("pause");
			break;
		}
		case 13: {
			system("cls");
			parqueoPtr->case13();
			system("pause");
			break;
		}
		case 14: {
			system("cls");
			parqueoPtr->case14();
			system("pause");
			break;
		}
		case 15: {
			system("cls");
			parqueoPtr->case15();
			system("pause");
			break;
		}
		case 16: {
			system("cls");
			int campos = 1;
			int numeroCampo;
			int j;
			for (int i = 0; i < tam; i++) {
				cout << "Campo numero: " << campos << endl << endl;
				campos++;
			}
			cout << "De que numero de campo desea obtener la informacion de los vehiculos que han sido ingresados?" << endl;
			cin >> numeroCampo;
			j = numeroCampo - 1;
			system("cls");
			parqueoPtr->case16(j);
			system("pause");
			break;
		}
		case 17: {
			system("cls");
			cout << parqueoPtr->case17() << endl;
			system("pause");
			break;
		}
		case 18: {
			system("cls");
			parqueoPtr->case18();
			system("pause");
			break;
		}
		case 19: {
			system("cls");
			cout << "----------------------------------------------------" << endl;
			cout << "Saliendo, gracias por hacer uso de nuestro parqueo" << endl;
			cout << "----------------------------------------------------" << endl;
			
			break;
		}
			   
		default: cout << "Vuelva a ingresar la opcion" << endl;
		
		}
	} while (op != 19);
	delete parqueoPtr;
	
	system("pause");
	return 0;
}