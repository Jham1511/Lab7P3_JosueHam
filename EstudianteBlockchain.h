#pragma once
#include "Estudiante.h"
class EstudianteBlockchain : public Estudiante
{
private:
	int FuerzaBrazos;
public:
	EstudianteBlockchain();
	EstudianteBlockchain(string, int, int, int,int, Cinta*, int);
	~EstudianteBlockchain();
	int getFuerzaBrazos();
	void setFuerzaBrazos(int);
	EstudianteBlockchain& operator--(int) {
		string arregloColores[]{ "Blanco" , "Amarillo", "Naranja", "Verde", "Azul", "Marron" , "Negro" };
		int nivelCinta = this->getCinta().getNivelCinta();
		if (this->getCinta().getNivelCinta() >= 1)
		{
			this->getCinta().masNivel();
			this->getCinta().ColoresNiveles();
			return *this;
		}
		else {
			cout << "No se puede descender mas de cinta" << endl;
		}

	}

	EstudianteBlockchain& operator++(int) {
		string arregloColores[]{ "Blanco" , "Amarillo", "Naranja", "Verde", "Azul", "Marron" , "Negro" };
		int nivelCinta = this->getCinta().getNivelCinta();
		if (this->getCinta().getNivelCinta() < 7)
		{
			this->getCinta().menosNivel();
			this->getCinta().ColoresNiveles();
			return *this;
		}
		else {
			cout << "No se puede ascender mas de cinta" << endl;
		}

	}
};