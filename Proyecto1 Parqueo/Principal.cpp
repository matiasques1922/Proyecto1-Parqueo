#include <iostream>
#include <sstream>
using namespace std;


int main() {
	int op = 0;
	do {
		cout << "-------------------------------------MENU----------------------------------------" << endl;
		cout << "1. Ver TODOS los campos del parqueo, (solo lugar, estado y placa)" << endl;
		cout << "2. Ver solo los campos que est�n OCUPADOS. (solo lugar, estado y placa)" << endl;
		cout << "3. Ver solo los campos que est�n en MANTENIMIENTO. (solo lugar y estado)" << endl;
		cout << "4. Ingresar un veh�culo al parqueo.Solicitar posici�n o lugar." << endl;
		cout << "5. Cancelar la estancia en el lugar.Realizar el debido cobro del alquiler." << endl;
		cout << "6. Ver solo los campos que est�n LIBRES. (solo lugar y estado)" << endl;
		cout << "7. Saber la cantidad de veh�culos que existen en el parqueo." << endl;
		cout << "8. Saber la cantidad de campos libres en el parqueo." << endl;
		cout << "9. Saber la cantidad de campos ocupados en el parqueo." << endl;
		cout << "10. Saber la cantidad de campos en mantenimiento en el parqueo." << endl;
		cout << "11. Saber la cantidad de veh�culos que han ingresado en el d�a." << endl;
		cout << "12. Saber la cantidad de dinero que ha ingresado al parqueo este d�a." << endl;
		cout << "13. Saber la cantidad de dinero que ha ingresado, por un solo campo." << endl;
		cout << "14. Saber le tonelaje de los veh�culos que hacen m�s uso del parqueo." << endl;
		cout << "15. Saber el porcentaje de ocupaci�n que tiene el parqueo." << endl;
		cout << "16. Mostrar la informaci�n de los veh�culos que han estado en un determinado campo." << endl;
		cout << "17. Mostar la informaci�n de todos(que est�n o no) los veh�culos del parqueo." << endl;
		cout << "18. Mostrar los veh�culos que se encuentran en el rango de tonelaje de 1.0 a 1.5" << endl;
		cout << "19. Salir." << endl;
		cout << "---------------------------------------------------------------------------------" << endl;
		cout << "Digite una opcion: ";
		cin >> op;

		switch (op) {
		case 1: {
			system("cls");

			system("pause");
			break;
		}
		case 2: {
			system("cls");

			system("pause");
			break;
		}
		case 3: {
			system("cls");

			system("pause");
			break;
		}
		case 4: {
			system("cls");

			system("pause");
			break;
		}
		case 5: {
			system("cls");

			system("pause");
			break;
		}
		case 6: {
			system("cls");

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
	system("pause");
	return 0;
}