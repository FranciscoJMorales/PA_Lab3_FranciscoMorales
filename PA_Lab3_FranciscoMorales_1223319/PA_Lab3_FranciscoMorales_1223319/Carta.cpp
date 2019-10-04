#include "Carta.h"

int numero;
char color;
bool volteado;
Carta *sig;

Carta::Carta(int n, char c)
{
	numero = n;
	color = c;
	volteado = false;
	sig = nullptr;
}

Carta::Carta(int n, char c, bool v, Carta *s)
{
	numero = n;
	color = c;
	volteado = v;
	sig = s;
}


Carta::~Carta()
{
}

System::String^Carta::Valor() {
	if (volteado) {
		if (color == 'N') {
			return numero.ToString() + "N";
		}
		else {
			return numero.ToString() + "R";
		}
	}
	else {
		return "??";
	}
}

void Carta::Voltear() {
	volteado = true;
}