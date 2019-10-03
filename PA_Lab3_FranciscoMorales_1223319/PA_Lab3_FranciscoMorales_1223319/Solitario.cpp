#include "Solitario.h"

Mazo *mazo;
Pila *pilas[9];

Solitario::Solitario()
{
	mazo = new Mazo();
	for (int i = 1; i <= 7; i++) {
		pilas[i] = new Pila();
		for (int a = 0; a < i; a++) {
			pilas[i]->Push(mazo->Sacar());
		}
	}
	pilas[0] = new Pila();
	for (int i = 0; i < 24; i++) {
		pilas[0]->Push(mazo->Sacar());
	}
}


Solitario::~Solitario()
{
}
