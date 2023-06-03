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
void Cinta::masNivel() {
	nivel++;
	ColoresNiveles();
}
void Cinta::menosNivel() {
	nivel--;
	ColoresNiveles();
}
void Cinta::ColoresNiveles() {
	switch (nivel)
	{
	case 1: {
		ColorCinta = "Blanco";
		break;
	}
	case 2: {
		ColorCinta = "Amarillo";
		break;
	}
	case 3: {
		ColorCinta = "Naranja";
		break;
	}
	case 4: {
		ColorCinta = "Verde";
		break;
	}
	case 5: {
		ColorCinta = "Azul";
		break;
	}
	case 6: {
		ColorCinta = "Marron";
		break;
	}
	case 7: {
		ColorCinta = "Marron";
		break;
	}
	default:
		break;
	}
}
