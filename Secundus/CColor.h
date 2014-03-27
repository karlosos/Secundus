#ifndef CCOLOR_H_KAROL
#define CCOLOR_H_KAROL

class CColor
{
public:
	///
	///Konsturktor
	///
	CColor(void);

	///
	///Destruktor
	///
	~CColor(void);

	///
	///Metoda ustawiajÄ…ca kolor
	///
	///@param r - wartoĹ›Ä‡ koloru czerwonego
	///@param g - wartoĹ›Ä‡ koloru zielonego
	///@param b - wartoĹ›Ä‡ koloru niebieskiego
	///
	void setColor(unsigned int r, unsigned int g, unsigned int b);
	
	///
	///Metoda pobierajÄ…ca wartoĹ›Ä‡ koloru czerwonego
	///
	int getColorR();

	///
	///Metoda pobierajÄ…ca wartoĹ›Ä‡ koloru czerwonego
	///
	int getColorG();

	///
	///Metoda pobierajÄ…ca wartoĹ›Ä‡ koloru czerwonego
	///
	int getColorB();

private:
	unsigned int red;			//zmienna koloru czerwonego
	unsigned int green;			//zmienna koloru zielonego
	unsigned int blue;			//zmienna koloru niebieskiego
};

#endif //CCOLOR_H_KAROL