#pragma once
class Carta
{
public:
	Carta(int n, char c);
	Carta(int n, char c, bool v, Carta *s);
	~Carta();
	int numero;
	char color;
	bool volteado;
	Carta *sig;
	System::String^Carta::Valor();
	void Carta::Voltear();
};

