#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int menu() {
	cout << "\nMenu del Programa" << endl
		<< "1 -> Crear Estudiante" << endl
		<< "2 -> Modificar Estudiante" << endl
		<< "3 -> Eliminar Estudiante" << endl
		<< "4 -> Listar Estudiante" << endl
		<< "5 -> Promover cinta del Estudiante" << endl
		<< "6 -> Degradar cinta del estudiante" << endl
		<< "7 -> Simulacion" << endl
		<< "8 -> Salir" << endl
		<< "Ingrese la opcion que desea: " << endl;
	int numero;
	cin >> numero;
	return numero;
}

int main()
{
	int opcionIngresada = menu();
	while (opcionIngresada != 8)
	{
		switch (opcionIngresada)
		{
		case 1: {

			break;
		}//Crear estudiante
		case 2: {

			break;
		}//Modificar estudiante
		case 3: {

			break;
		}//Eliminar estudiante
		case 4: {

			break;
		}//Listar estudiante
		case 5: {

			break;
		}//Promover cinta del estudiante
		case 6: {

			break;
		}//Degradar cinta del estudiante
		case 7: {

			break;
		}//Simulacion
		default: 
			cout << "..." << endl;
		}//Fin del switch
		opcionIngresada = menu();
	}//Fin del while
}