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
		Cinta cinta = getCinta();
		int nivelCinta = cinta.getNivelCinta();
		if ( nivelCinta < 7)
		{
			nivelCinta++;
			cinta.setColorCinta(arregloColores[nivelCinta]);
			return *this;
		}
		else {
			cout << "No se puede ascender mas de cinta" << endl;
		}

	}
EstudianteCobra& operator--(int) {
		string arregloColores[]{ "Blanco" , "Amarillo", "Naranja", "Verde", "Azul", "Marron" , "Negro" };
		Cinta cinta = getCinta();
		int nivelCinta = cinta.getNivelCinta();
		if ( >= 1)
		{
			nivelCinta--;
			cinta.setColorCinta(arregloColores[nivelCinta]);
			return *this;
		}
		else {
			cout << "No se puede descender mas de cinta" << endl;
		}

	}
};