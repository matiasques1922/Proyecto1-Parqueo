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

	cout << endl;
	cout << "Se creo un parqueo con: " << tam << " campos" << endl;
	cout << endl;

	for (int i = 0; i < tam; i++) {

		parqueoPtr->getVec(i)->setNumeroCampo(i + 1);
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
	}
	system("pause");

	do {
		system("cls");
		cout << "-------------------------------------MENU----------------------------------------" << endl;
		cout << "1. Ver TODOS los campos del parqueo, (solo lugar, estado y placa)" << endl;
		cout << "2. Ver solo los campos que están OCUPADOS. (solo lugar, estado y placa)" << endl;
		cout << "3. Ver solo los campos que están en MANTENIMIENTO. (solo lugar y estado)" << endl;
		cout << "4. Ingresar un vehículo al parqueo.Solicitar posición o lugar." << endl;
		cout << "5. Cancelar la estancia en el lugar.Realizar el debido cobro del alquiler." << endl;
		cout << "6. Ver solo los campos que están LIBRES. (solo lugar y estado)" << endl;
		cout << "7. Saber la cantidad de vehículos que existen en el parqueo." << endl;
		cout << "8. Saber la cantidad de campos libres en el parqueo." << endl;
		cout << "9. Saber la cantidad de campos ocupados en el parqueo." << endl;
		cout << "10. Saber la cantidad de campos en mantenimiento en el parqueo." << endl;
		cout << "11. Saber la cantidad de vehículos que han ingresado en el día." << endl;
		cout << "12. Saber la cantidad de dinero que ha ingresado al parqueo este día." << endl;
		cout << "13. Saber la cantidad de dinero que ha ingresado, por un solo campo." << endl;
		cout << "14. Saber el tonelaje de los vehículos que hacen más uso del parqueo." << endl;
		cout << "15. Saber el porcentaje de ocupación que tiene el parqueo." << endl;
		cout << "16. Mostrar la información de los vehículos que han estado en un determinado campo." << endl;
		cout << "17. Mostar la información de todos(que estén o no) los vehículos del parqueo." << endl;
		cout << "18. Mostrar los vehículos que se encuentran en el rango de tonelaje de 1.0 a 1.5" << endl;
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
			parqueoPtr->case4();
			system("pause");
			break;
		}
		case 5: {
			system("cls");
			string placa;
			cout << "Ingrese la placa del vehiculo que va a pagar su estancia en el parqueo: ";
			cin >> placa;
			cout << parqueoPtr->case5(placa) << endl;
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

			system("pause");
			break;
		}
		case 8: {
			system("cls");

			system("pause");
			break;
		}
		case 9: {
			system("cls");

			system("pause");
			break;
		}
		case 10: {
			system("cls");

			system("pause");
			break;
		}
		case 11: {
			system("cls");

			system("pause");
			break;
		}
		case 12: {
			system("cls");

			system("pause");
			break;
		}
		case 13: {
			system("cls");

			system("pause");
			break;
		}
		case 14: {
			system("cls");

			system("pause");
			break;
		}
		case 15: {
			system("cls");

			system("pause");
			break;
		}
		case 16: {
			system("cls");

			system("pause");
			break;
		}
		case 17: {
			system("cls");
			cout << parqueoPtr->toString() << endl;
			system("pause");
			break;
		}
		case 18: {
			system("cls");
			
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


//while (letra == 's') {
//	cout << "-------------INGRESANDO PERSONA---------------------" << endl;
//	cout << endl;
//	cout << "Ingrese su cedula...";
//	cin >> ced;
//	cout << "Ingrese su nombre...";
//	cin >> nom;
//	cout << "Ingrese su edad...";
//	cin >> ed;
//	per = new Persona(ced, nom, ed); 
//
//
//
//	if (CO.ingresarPersona(per)) 
//		cout << "Si, si se pudo ingresar la persona." << endl;
//	else
//		cout << "No, no se pudo ingresar la persona." << endl;
//	cout << endl;
//	cout << "Desea seguir ingresando personas.....s/n ?...";
//	cin >> letra;
//}
//
//
//
//
//cout << CO.toString() << endl;