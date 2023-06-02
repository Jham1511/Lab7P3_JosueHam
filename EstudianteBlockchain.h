#pragma once
#include "Estudiante.h"
class EstudianteBlockchain
{
private:
	int FuerzaBrazos;
public:
	EstudianteBlockchain();
	EstudianteBlockchain(int);
	~EstudianteBlockchain();
	int getFuerzaBrazos();
	void setFuerzaBrazos(int);
};