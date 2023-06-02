#include "Cinta.h"
Cinta::Cinta() {
	this->nivel = 1;
	this->ColorCinta = "Blanco";
}

Cinta::~Cinta() {
	
}

int Cinta::getNivelCinta() {
	return nivel;
}

string Cinta::getColorCinta() {
	return ColorCinta;
}

void Cinta::setNivelCinta(int nivelCinta) {
	this->nivel = nivelCinta;
}

void Cinta::setColorCinta(string nueColor) {
	this->ColorCinta = nueColor;
}