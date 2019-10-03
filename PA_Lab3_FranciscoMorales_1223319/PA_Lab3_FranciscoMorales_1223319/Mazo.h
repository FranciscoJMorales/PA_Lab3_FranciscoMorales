#pragma once
#include "Carta.h"

class Mazo
{
public:
	Carta *cartas[52];
	Mazo();
	~Mazo();
	Carta *Mazo::Sacar();
private:
	int posicion;
	void Mazo::Revolver();
};

