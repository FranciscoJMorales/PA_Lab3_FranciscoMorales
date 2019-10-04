#include "Pila.h"

Carta *head;

Pila::Pila()
{
	head = nullptr;
}


Pila::~Pila()
{
}

void Pila::Push(Carta *nuevo) {
	if (head != nullptr) {
		nuevo->sig = head;
	}
	head = nuevo;
}

Carta Pila::Pop() {
	Carta aux = *head;
	head = head->sig;
	(&aux)->sig = nullptr;
	return aux;
}

Carta *Pila::UltimaCartaVolteada() {
	return UltimaCartaVolteadaRecursiva(head);
}

System::String^Pila::String() {
	return StringRecursivo(head);
}

Carta *Pila::UltimaCartaVolteadaRecursiva(Carta *pos) {
	if (pos->sig != nullptr) {
		if (pos->sig->volteado) {
			return UltimaCartaVolteadaRecursiva(pos->sig);
		}
		else {
			return pos;
		}
	}
	else {
		return pos;
	}
}

System::String^Pila::StringRecursivo(Carta *pos) {
	if (pos != nullptr) {
		if (pos->sig == nullptr) {
			return pos->Valor();
		}
		else {
			return StringRecursivo(pos->sig) + "\n" + pos->Valor();
		}
	}
	else {
		return "--";
	}
}