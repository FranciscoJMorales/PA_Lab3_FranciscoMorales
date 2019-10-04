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
		pilas[i]->head->Voltear();
	}
	pilas[0] = new Pila();
	for (int i = 0; i < 24; i++) {
		pilas[0]->Push(mazo->Sacar());
	}
	pilas[0]->head->Voltear();
	pilas[8] = new Pila();
}


Solitario::~Solitario()
{
}

Carta Solitario::Mover(Pila *inicio, Pila *fin) {
	Carta *nuevo = inicio->UltimaCartaVolteada();
	if (fin->head != nullptr) {
		if (nuevo->numero == fin->head->numero - 1 && nuevo->color != fin->head->color) {
			while (inicio->head != nuevo) {
				pilas[8]->Push(&inicio->Pop());
			}
			pilas[8]->Push(&inicio->Pop());
			while (pilas[8]->head != nullptr) {
				fin->Push(&pilas[8]->Pop());
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("El movimiento no es válido", "Error");
		}
	}
	else if (nuevo->numero == 13) {
		while (inicio->head != nuevo) {
			pilas[8]->Push(&inicio->Pop());
		}
		pilas[8]->Push(&inicio->Pop());
		while (pilas[8]->head != nullptr) {
			fin->Push(&pilas[8]->Pop());
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("El movimiento no es válido", "Error");
	}
	if (inicio->head != nullptr) {
		inicio->head->Voltear();
	}
	Carta temp = *fin->head;
	return temp;
}