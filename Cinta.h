#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cinta
{
private:
	int nivel;
	string ColorCinta;
public: 
	Cinta();
	~Cinta();
	int getNivelCinta();
	void setNivelCinta(int);
	string getColorCinta();
	void setColorCinta(string);
};