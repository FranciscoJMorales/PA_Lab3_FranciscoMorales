#pragma once
#include "Carta.h"
class Pila
{
public:
	Carta *head;
	Pila();
	~Pila();
	void Pila::Push(Carta *nuevo);
	Carta Pila::Pop();
	Carta *Pila::UltimaCartaVolteada();
	System::String^Pila::String();
private:
	Carta *Pila::UltimaCartaVolteadaRecursiva(Carta *pos);
	System::String^Pila::StringRecursivo(Carta *pos);
};

