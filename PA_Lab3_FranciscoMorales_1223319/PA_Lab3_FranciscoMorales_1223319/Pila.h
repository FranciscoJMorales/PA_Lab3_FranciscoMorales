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
	int Pila::CantidadCartasVolteadas();
	System::String^Pila::String();
private:
	Carta *Pila::UltimaCartaVolteadaRecursiva(Carta *pos);
	int Pila::CantidadCartasVolteadasRecursiva(Carta *pos);
	System::String^Pila::StringRecursivo(Carta *pos);
};

