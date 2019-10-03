#pragma once
class Carta
{
public:
	Carta(int n, char c);
	~Carta();
	int numero;
	char color;
	Carta *sig;
	System::String^Carta::Valor();
};

