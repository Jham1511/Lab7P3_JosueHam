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
};