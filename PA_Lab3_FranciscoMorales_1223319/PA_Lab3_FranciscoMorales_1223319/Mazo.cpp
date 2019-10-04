#include "Mazo.h"

int posicion;
Carta *cartas[52];

Mazo::Mazo()
{
	posicion = -1;
	int n = 2;
	char color = 'N';
	for (int i = 0; i < 52; i++) {
		if (n == 28) {
			color = 'R';
			n = 2;
		}
		cartas[i] = new Carta(n / 2, color);
		n++;
	}
	Revolver();
}


Mazo::~Mazo()
{
}

void Mazo::Revolver() {
	System::Random^ rng = gcnew System::Random();
	for (int i = 0; i < 100; i++) {
		Carta *ant = cartas[rng->Next(0, 52)];
		Carta *sig = cartas[rng->Next(0, 52)];
		Carta aux = *ant;
		*ant = *sig;
		*sig = aux;
	}
}

Carta *Mazo::Sacar() {
	posicion++;
	return cartas[posicion];
}