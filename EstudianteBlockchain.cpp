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
