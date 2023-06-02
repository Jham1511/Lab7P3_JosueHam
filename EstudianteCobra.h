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
};