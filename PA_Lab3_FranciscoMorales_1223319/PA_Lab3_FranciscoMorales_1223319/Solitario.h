#pragma once
#include "Mazo.h"
#include "Pila.h"
#include "Carta.h"

class Solitario
{
public:
	Mazo *mazo;
	Pila *pilas[9];
	Solitario();
	~Solitario();
	Carta Solitario::Mover(Pila *inicio, Pila *fin);
};

