#pragma once
#include "Estudiante.h"
class EstudianteCobra : public Estudiante
{
private:
	int FuerzaPiernas;
public:
	EstudianteCobra();
	EstudianteCobra(int);
	~EstudianteCobra();
	int getFuerzaPiernas();
	void setFuerzaPiernas(int);
};