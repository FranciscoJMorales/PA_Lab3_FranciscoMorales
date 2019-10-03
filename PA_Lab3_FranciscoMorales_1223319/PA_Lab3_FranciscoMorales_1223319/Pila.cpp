#include "Pila.h"

Carta *head;

Pila::Pila()
{
}


Pila::~Pila()
{
}

void Pila::Push(Carta *nuevo) {
	if (head) {
		nuevo->sig = head;
	}
	head = nuevo;
}

Carta *Pila::Pop() {
	Carta *aux = head;
	head = aux->sig;
	return aux;
}

System::String^Pila::String() {
	return head->Valor();
}