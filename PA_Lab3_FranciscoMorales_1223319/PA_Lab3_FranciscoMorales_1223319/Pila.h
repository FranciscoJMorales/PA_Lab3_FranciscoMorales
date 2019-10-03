#pragma once
#include "Carta.h"
class Pila
{
public:
	Carta *head;
	Pila();
	~Pila();
	void Pila::Push(Carta *nuevo);
	Carta *Pila::Pop();
	System::String^Pila::String();
};

