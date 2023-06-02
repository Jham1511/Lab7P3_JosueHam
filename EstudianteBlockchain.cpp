#include "EstudianteBlockchain.h"
EstudianteBlockchain::EstudianteBlockchain() {
	this->FuerzaBrazos = 0;
}
EstudianteBlockchain::EstudianteBlockchain(string nombre, int edad, int fuerza, int resistencia, int overall, Cinta* cinta, int fuerzaBrazos) :
	Estudiante(nombre, edad, fuerza, resistencia, overall, cinta) {
	this->FuerzaBrazos = fuerzaBrazos;
}

EstudianteBlockchain::~EstudianteBlockchain() {
	
}

int EstudianteBlockchain::getFuerzaBrazos() {
	return FuerzaBrazos;
}

void EstudianteBlockchain::setFuerzaBrazos(int nueFuerzaBrazos) {
	this->FuerzaBrazos = nueFuerzaBrazos;
}

void operator++(EstudianteBlockchain& estBlock) {
	string arregloColores[]{ "Blanco" , "Amarillo", "Naranja", "Verde", "Azul", "Marron" , "Negro"};
	int nivelCinta = estBlock.getCinta().getNivelCinta();
	if (nivelCinta < 7)
	{
		estBlock.getCinta().setNivelCinta(nivelCinta+1);
		estBlock.getCinta().setColorCinta(arregloColores[nivelCinta + 1]);
	}
	else {
		cout << "No se puede ascender mas de cinta" << endl;
	}

}


void operator--(EstudianteBlockchain& estBlock) {
	string arregloColores[]{ "Blanco" , "Amarillo", "Naranja", "Verde", "Azul", "Marron" , "Negro" };
	int nivelCinta = estBlock.getCinta().getNivelCinta();
	if (nivelCinta >= 1)
	{
		estBlock.getCinta().setNivelCinta(nivelCinta - 1);
		estBlock.getCinta().setColorCinta(arregloColores[nivelCinta - 1]);
	}
	else {
		cout << "No se puede descender mas de cinta" << endl;
	}

}