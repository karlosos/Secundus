#ifndef H_CBEBEN_KAROL
#define H_CBEBEN_KAROL

#include "CColor.h"
#include <iostream>

class CBeben
{
public:
	///
	///Konsturktor
	///
	CBeben(void);

	///
	///Destruktor
	///
	~CBeben(void);

	///
	///Metoda ustawiajÄ…ca wagÄ™
	///
	///@param w - waga w kilogramach
	///
	void setWeight(float w);

	///
	///Metoda zwracajÄ…ca wagÄ™
	///
	float getWeight();

	///
	///Metoda ustawiajÄ…ca Ĺ›rednicÄ™
	///
	///@param d - srednica w centymeteach
	///
	void setDiam(unsigned int d);

	///
	///Metoda zwracajÄ…ca Ĺ›rednicÄ™
	///
	int getDiam();

	///
	///Metoda ustawiajÄ…ca gĹ‚Ä™bokoĹ›Ä‡
	///
	///@param d - glebokosc w centymetrach
	///
	void setDepth(unsigned int d);

	///
	///Metoda zwracajÄ…ca gĹ‚Ä™bokoĹ›Ä‡
	///
	int getDepth();

	///
	///Metoda ustawiajÄ…ca kolor
	///
	///@param r - wartoĹ›Ä‡ koloru czerwonego
	///@param g - wartoĹ›Ä‡ koloru zielonego
	///@param b - wartoĹ›Ä‡ koloru niebieskiego
	///
	void setColor (unsigned int r, unsigned int g, unsigned int b);

	///
	///Metoda zwracajÄ…ca wartosc koloru czerwonego
	///
	int getColorR ();

	///
	///Metoda zwracajÄ…ca wartosc koloru zielonego
	///
	int getColorG ();

	///
	///Metoda zwracajÄ…ca wartosc niebieskiego
	///
	int getColorB ();

private:
	float weight; //waga bÄ™bna
	unsigned int diam; //Ĺ›rednica 
	unsigned int depth; //gĹ‚Ä™bokoĹ›Ä‡
	CColor color; //kolor bÄ™bna
};

#endif //H_CBEBEN_KAROL