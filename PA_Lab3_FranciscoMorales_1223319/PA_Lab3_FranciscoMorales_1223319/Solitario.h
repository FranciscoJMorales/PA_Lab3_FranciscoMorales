#pragma once
#include "Mazo.h"
#include "Pila.h"
#include "Carta.h"

class Solitario
{
public:
	Mazo *mazo;
	Pila *pilas[10];
	Solitario();
	~Solitario();
};

