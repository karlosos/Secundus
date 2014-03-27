#include "CBeben.h"


CBeben::CBeben(void)
{
}


CBeben::~CBeben(void)
{
}

//Metoda ustawiajÄ…ca wagÄ™
void CBeben::setWeight(float w)
{
	weight = w;
}

//Metoda zwracajÄ…ca wagÄ™
float CBeben::getWeight()
{
	return weight;
}

//Metoda ustawiajÄ…ca Ĺ›rednicÄ™
void CBeben::setDiam(unsigned int d)
{
	diam = d;
}

//Metoda zwracajÄ…ca Ĺ›rednicÄ™
int CBeben::getDiam()
{
	return diam;
}

//Metoda ustawiajÄ…ca gĹ‚Ä™bokoĹ›Ä‡
void CBeben::setDepth(unsigned int d)
{
	depth = d;
}

//Metoda zwracajÄ…ca gĹ‚Ä™bokoĹ›Ä‡
int CBeben::getDepth()
{
	return depth;
}

//Metoda ustawiajÄ…ca kolor
void CBeben::setColor (unsigned int r, unsigned int g, unsigned int b)
{
	color.setColor(r, g, b);
}

///Metoda zwracajÄ…ca kod czerwieni
int CBeben::getColorR ()
{
	return color.getColorR();
}

///Metoda zwracajÄ…ca kod zieleni
int CBeben::getColorG ()
{
	return color.getColorG();
}


///Metoda zwracajÄ…ca kod niebieskiego
int CBeben::getColorB ()
{
	return color.getColorB();
}

