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



