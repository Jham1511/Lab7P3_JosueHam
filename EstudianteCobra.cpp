#include "EstudianteCobra.h"
EstudianteCobra::EstudianteCobra() : Estudiante(){
	this->FuerzaPiernas = 0;
}

EstudianteCobra::EstudianteCobra(string nombre, int edad, int fuerza, int resistencia, int overall, Cinta* cinta, int fuerzaPiernas) :
	Estudiante(nombre,edad, fuerza, resistencia, overall, cinta) {
	this -> FuerzaPiernas = fuerzaPiernas;
}
EstudianteCobra::~EstudianteCobra() {
	
}
int EstudianteCobra::getFuerzaPiernas() {
	return FuerzaPiernas;
}

void EstudianteCobra::setFuerzaPiernas(int fuePiernas) {
	this->FuerzaPiernas = fuePiernas;
}

void operator++(EstudianteCobra& estCobra) {
	string arregloColores[]{ "Blanco" , "Amarillo", "Naranja", "Verde", "Azul", "Marron" , "Negro" };
	int nivelCinta = estCobra.getCinta().getNivelCinta();
	if (nivelCinta < 7)
	{
		estCobra.getCinta().setNivelCinta(nivelCinta + 1);
		estCobra.getCinta().setColorCinta(arregloColores[nivelCinta + 1]);
	}
	else {
		cout << "No se puede ascender mas de cinta" << endl;
	}

}

void operator--(EstudianteCobra& estCobra) {
	string arregloColores[]{ "Blanco" , "Amarillo", "Naranja", "Verde", "Azul", "Marron" , "Negro" };
	int nivelCinta = estCobra.getCinta().getNivelCinta();
	if (nivelCinta >= 1)
	{
		estCobra.getCinta().setNivelCinta(nivelCinta - 1);
		estCobra.getCinta().setColorCinta(arregloColores[nivelCinta - 1]);
	}
	else {
		cout << "No se puede descender mas de cinta" << endl;
	}

}