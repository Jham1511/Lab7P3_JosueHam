#pragma once
#include <iostream>
#include <string>
#include "Cinta.h"
using namespace std;
class Estudiante
{
private: 
	string nombre;
	int edad, fuerza, resistencia, overall;
	int vida = 100;
	Cinta *cinta;
public:
	Estudiante();
	Estudiante(string, int, int, int, int, Cinta*);
	~Estudiante();
	string getNombre();
	void setNombre(string);
	int getEdad();
	void setEdad(int);
};