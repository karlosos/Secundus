#include "CColor.h"

//Konstruktor
CColor::CColor(void)
{
}

//Destruktor
CColor::~CColor(void)
{
}


//Metoda ustawiajÄ…ca kolor
void CColor::setColor(unsigned int r, unsigned int g, unsigned int b)
{
	red = r;
	green = g;
	blue = b;
}
	

//Metoda pobierajÄ…ca wartoĹ›Ä‡ koloru czerwonego
int CColor::getColorR()
{
	return red;
}

//Metoda pobierajÄ…ca wartoĹ›Ä‡ koloru czerwonego
int CColor::getColorG()
{
	return green;
}

//
///Metoda pobierajÄ…ca wartoĹ›Ä‡ koloru czerwonego
int CColor::getColorB()
{
	return blue;
}