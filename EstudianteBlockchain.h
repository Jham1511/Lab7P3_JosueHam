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
		Cinta cinta = getCinta();
		int nivelCinta = cinta.getNivelCinta();
		if (nivelCinta >= 1)
		{
			nivelCinta--;
			cinta.setColorCinta(arregloColores[nivelCinta]);
			return *this;
		}
		else {
			cout << "No se puede descender mas de cinta" << endl;
		}

	}

	EstudianteBlockchain& operator++(int) {
		string arregloColores[]{ "Blanco" , "Amarillo", "Naranja", "Verde", "Azul", "Marron" , "Negro" };
		Cinta cinta = getCinta();
		int nivelCinta = cinta.getNivelCinta();
		if (nivelCinta < 7)
		{
			nivelCinta++;
			cinta.setColorCinta(arregloColores[nivelCinta]);
			return *this;
		}
		else {
			cout << "No se puede ascender mas de cinta" << endl;
		}

	}
};