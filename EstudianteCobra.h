#pragma once
#include "Estudiante.h"
class EstudianteCobra : public Estudiante
{
private:
	int FuerzaPiernas;
public:
	EstudianteCobra();
	EstudianteCobra(string, int, int, int, int, Cinta*, int);
	~EstudianteCobra();
	int getFuerzaPiernas();
	void setFuerzaPiernas(int);
	EstudianteCobra& operator++(int) {
		string arregloColores[]{ "Blanco" , "Amarillo", "Naranja", "Verde", "Azul", "Marron" , "Negro" };
		int nivelCinta = this->getCinta().getNivelCinta();
		if (this->getCinta().getNivelCinta() < 7)
		{
			this->getCinta().masNivel();
			this->getCinta().ColoresNiveles();
			return *this;
		}
		else {
			cout << "No se puede ascender mas de cinta" << endl;
		}

	}

EstudianteCobra& operator--(int) {
		string arregloColores[]{ "Blanco" , "Amarillo", "Naranja", "Verde", "Azul", "Marron" , "Negro" };
		int nivelCinta = this->getCinta().getNivelCinta();
		if (this->getCinta().getNivelCinta() >= 1)
		{
			this->getCinta().menosNivel();
			this->getCinta().ColoresNiveles();
			return *this;
		}
		else {
			cout << "No se puede descender mas de cinta" << endl;
		}

	}
};