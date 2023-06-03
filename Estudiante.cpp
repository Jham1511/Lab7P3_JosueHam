#include "Estudiante.h"
Estudiante::Estudiante() {
	this->nombre = "Sin confirmar";
	this->edad = 0;
	this->fuerza = 0;
	this->resistencia = 0;
	this->overall = 0;
	this->cinta = 0;
	this->vida = 100;
}
Estudiante::Estudiante(string nombre, int edad, int fuerza, int resistencia, int overall, Cinta* cinta){
	this->nombre = nombre;
	this->edad = edad;
	this->fuerza = fuerza;
	this->resistencia = resistencia;
	this->overall = overall;
	this->cinta = cinta;
	this->vida = 100;
}
Estudiante::~Estudiante() {
	
}
string Estudiante::getNombre() {
	return nombre;
}

void Estudiante::setNombre(string nom) {
	this->nombre = nom;
}

int Estudiante::getEdad() {
	return edad;
}
void Estudiante::setEdad(int edad) {
	this->edad = edad;
}
Cinta Estudiante::getCinta() {
	return *cinta;
}
int Estudiante::getVida() {
	return vida;
}
void Estudiante::setVida(int nueVida) {
	this->vida = nueVida;
}