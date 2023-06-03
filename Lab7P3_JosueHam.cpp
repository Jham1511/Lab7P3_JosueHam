#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "Estudiante.h"
#include "EstudianteBlockchain.h"
#include "EstudianteCobra.h"
#include "Cinta.h"
using namespace std;


void imprimirCobras(vector<EstudianteCobra> cobras) {
	cout << "Estudiantes cobra disponibles" << endl;
	for (int i = 0; i < cobras.size(); i++)
	{
		cout << "Posicion: " << i << endl
			<< "Nombre: " << cobras[i].getNombre() << endl
			<< "Edad: " << cobras[i].getEdad() << endl;
	}
}
void imprimirBlockchains(vector<EstudianteBlockchain> blockchains) {
	cout << "Estudiantes Blockchain disponibles" << endl;
	for (int i = 0; i < blockchains.size(); i++)
	{
		cout << "Posicion: " << i << endl
			<< "Nombre: " << blockchains[i].getNombre() << endl
			<< "Edad: " << blockchains[i].getEdad() << endl;
	}
}
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
				
				EstudianteCobra estCobra(nombre, edad, fuerza, resistencia, overall, new Cinta, fuerzaPiernas);
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
				
				EstudianteBlockchain estBlockchain(nombre, edad, fuerza, resistencia, overall, new Cinta, fuerzaBrazos);
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
			cout << "Bienvenido a Modificar Estudiante" << endl;
			cout << "De que dojo es?" << endl
				<< "1-> Dojo Cobra" << endl
				<< "2-> Dojo Blockchain" << endl
				<< "Seleccione la opcion que desea: " << endl;
			int opcionDojo;
			cin >> opcionDojo;
			switch (opcionDojo)
			{
				case 1: {
					imprimirCobras(estudiantesCobra);
					cout << "Seleccione el estudiante que desea modificar: " << endl;
					int posEst;
					cin >> posEst;

					cout << "Ingrese el nuevo nombre: " << endl;
					string nueNombre;
					cin >> nueNombre;

					cout << "Ingrese la nueva edad: " << endl;
					int nueEdad;
					cin >> nueEdad;

					estudiantesCobra[posEst].setNombre(nueNombre);
					estudiantesCobra[posEst].setEdad(nueEdad);
					cout << "Cambios realizados" << endl;
					break;
				}
				case 2: {
					imprimirBlockchains(estudiantesBlockchain);
					cout << "Seleccione el estudiante que desea modificar: " << endl;
					int posEst;
					cin >> posEst;

					cout << "Ingrese el nuevo nombre: " << endl;
					string nueNombre;
					cin >> nueNombre;

					cout << "Ingrese la nueva edad: " << endl;
					int nueEdad;
					cin >> nueEdad;

					estudiantesBlockchain[posEst].setNombre(nueNombre);
					estudiantesBlockchain[posEst].setEdad(nueEdad);
					cout << "Cambios realizados" << endl;
					break;
				}
			default:
				cout << "Dojo no disponible" << endl;
			}
			break;
		}//Modificar estudiante
		case 3: {
			cout << "Bienvenido a Eliminar Estudiante" << endl;
			cout << "De que dojo es?" << endl
				<< "1-> Dojo Cobra" << endl
				<< "2-> Dojo Blockchain" << endl
				<< "Seleccione la opcion que desea: " << endl;
			int opcionDojo;
			cin >> opcionDojo;
			switch (opcionDojo) {
			case 1: {
				imprimirCobras(estudiantesCobra);
				cout << "Seleccione el estudiante que desea eliminar: " << endl;
				int posCobras; cin >> posCobras;

				estudiantesCobra.erase(estudiantesCobra.begin()+posCobras);
				
				cout << "Estudiante eliminado correctamente" << endl;
				break;
			}
			case 2: {
				imprimirBlockchains(estudiantesBlockchain);
				cout << "Seleccione el estudiante que desea eliminar: " << endl;
				int posBlock;
				cin >> posBlock;

				estudiantesBlockchain.erase(estudiantesBlockchain.begin() + posBlock);
				cout << "Estudiante eliminado correctamente" << endl;
				break;
			}
			default: 
				cout << "No esta el dojo" << endl;
			}
			break;
		}//Eliminar estudiante

		case 4: {
			imprimirCobras(estudiantesCobra);
			imprimirBlockchains(estudiantesBlockchain);
			break;
		}//Listar estudiante

		case 5: {
			cout << "Bienvenido a ascender un estudiante" << endl;
			cout << "De que dojo es?" << endl
				<< "1-> Dojo Cobra" << endl
				<< "2-> Dojo Blockchain" << endl
				<< "Seleccione la opcion que desea: " << endl;
			int opcionDojo;
			cin >> opcionDojo;
			switch (opcionDojo)
			{
			case 1: {
				imprimirCobras(estudiantesCobra);
				cout << "Seleccione el estudiante que desea: " << endl;
				int posCobras;
				cin >> posCobras;

				
				estudiantesCobra[posCobras]++;
				cout << estudiantesCobra[posCobras].getNombre() << " ahora es cinta: " << estudiantesCobra[posCobras].getCinta().getColorCinta() << "!";
				break;
			}
			case 2: {
				imprimirBlockchains(estudiantesBlockchain);
				cout << "Seleccione el estudiante que desea: " << endl;
				int posBlock;
				cin >> posBlock;

			
				estudiantesBlockchain[posBlock]++;
				cout << estudiantesBlockchain[posBlock].getNombre() << " ahora es cinta: " << estudiantesBlockchain[posBlock].getCinta().getColorCinta() << "!";
				break;
			}
			default:
				cout << "Dojo no disponible" << endl;
			}
			break;
		}//Promover cinta del estudiante

		case 6: {
			cout << "Bienvenido a ascender un estudiante" << endl;
			cout << "De que dojo es?" << endl
				<< "1-> Dojo Cobra" << endl
				<< "2-> Dojo Blockchain" << endl
				<< "Seleccione la opcion que desea: " << endl;
			int opcionDojo;
			cin >> opcionDojo;
			switch (opcionDojo)
			{
			case 1: {
				imprimirCobras(estudiantesCobra);
				cout << "Seleccione el estudiante que desea: " << endl;
				int posCobras;
				cin >> posCobras;

				
				estudiantesCobra[posCobras];
				cout << estudiantesCobra[posCobras].getNombre() << " ahora es cinta: " << estudiantesCobra[posCobras].getCinta().getColorCinta() << "!";
				break;
			}
			case 2: {
				imprimirBlockchains(estudiantesBlockchain);
				cout << "Seleccione el estudiante que desea: " << endl;
				int posBlock;
				cin >> posBlock;

				estudiantesBlockchain[posBlock];
				cout << estudiantesBlockchain[posBlock].getNombre() << " ahora es cinta: " << estudiantesBlockchain[posBlock].getCinta().getColorCinta() << "!";
			}
			default:
				cout << "Dojo no existente" << endl;
			}
			break;
		}//Degradar cinta del estudiante

		case 7: {
			int contadorPosiciones = 0;
			if (estudiantesBlockchain.size() > 4 && estudiantesCobra.size() > 4)
			{
				while ((estudiantesBlockchain.size() > 1 && estudiantesCobra.size() < 1) 
					|| (estudiantesCobra.size() > 1 && estudiantesBlockchain.size() < 1))
				{
					while (estudiantesCobra[contadorPosiciones].getVida() > 1 || estudiantesCobra[contadorPosiciones].getVida() > 1)
					{

					}
				}
			}
			break;
		}//Simulacion
		default: 
			cout << "..." << endl;
		}//Fin del switch
		opcionIngresada = menu();
	}//Fin del while
}