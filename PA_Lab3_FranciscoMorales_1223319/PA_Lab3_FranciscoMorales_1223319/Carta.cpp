#include "Carta.h"

int numero;
char color;
Carta *sig;

Carta::Carta(int n, char c)
{
	numero = n;
	color = c;
}


Carta::~Carta()
{
}

System::String^Carta::Valor() {
	if (color == 'N') {
		return numero.ToString() + "N";
	}
	else {
		return numero.ToString() + "R";
	}
}