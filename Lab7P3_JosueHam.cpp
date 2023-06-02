#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "Estudiante.h"
#include "EstudianteBlockchain.h"
#include "EstudianteCobra.h"
#include "Cinta.h"
using namespace std;

int randomEstudiantes() {
	int aleatorio = 0 + rand() % (31 - 0);
	return aleatorio;
}//Metodo random para la fuerza y la resistencia de la clase estudiante
int randomFuerza() {
	int aleatorio = 0 + rand() % (11 - 0);
	return aleatorio;
}//Metodo random para la fuerzaPiernas y fuerzaBrazos para las clases hijas

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
	srand(time(NULL));
	int opcionIngresada = menu();
	vector<EstudianteCobra> estudiantesCobra;
	vector<EstudianteBlockchain> estudiantesBlockchain;
	while (opcionIngresada!= 8)
	{
		switch (opcionIngresada)
		{
		case 1: {
			cout << "Bienvenido a Crear Estudiante" << endl;
			cout << "De que dojo es?" << endl
				<< "1-> Dojo Cobra" << endl
				<< "2-> Dojo Blockchain" << endl
				<< "Seleccione la opcion que desea: " << endl;
			int opcionDojo;
			cin >> opcionDojo;
			switch (opcionDojo)
			{
			case 1: {
				cout << "Ingrese el nombre del estudiante: " << endl;
				string nombre;
				cin >> nombre;

				cout << "Ingrese la edad del estudiante: " << endl;
				int edad;
				cin >> edad;

				int fuerza, resistencia;
				fuerza = randomEstudiantes();
				resistencia = randomEstudiantes();

				int fuerzaPiernas = randomFuerza();
				int overall = fuerza + resistencia + fuerzaPiernas; 
				Cinta* cinta = nullptr;
				EstudianteCobra estCobra(nombre, edad, fuerza, resistencia, overall, cinta, fuerzaPiernas);
				estudiantesCobra.push_back(estCobra);
				cout << "Estudiante agregado exitosamente" << endl;
				break;
			}
			case 2: {
				cout << "Ingrese el nombre del estudiante: " << endl;
				string nombre;
				cin >> nombre;

				cout << "Ingrese la edad del estudiante: " << endl;
				int edad;
				cin >> edad;

				int fuerza, resistencia;
				fuerza = randomEstudiantes();
				resistencia = randomEstudiantes();

				int fuerzaBrazos = randomFuerza();
				int overall = fuerza + resistencia + fuerzaBrazos;
				Cinta* cinta;
				EstudianteBlockchain estBlockchain(nombre, edad, fuerza, resistencia, overall, cinta, fuerzaBrazos);
				estudiantesBlockchain.push_back(estBlockchain);
				cout << "Estudiante agregado exitosamente" << endl;
				break;
			}
			default:
				cout << "Dojo no valido" << endl;
			}//Fin del switch de saber el tipo de dojo
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