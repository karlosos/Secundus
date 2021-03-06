#ifndef CBOSS_H_KD
#define CBOSS_H_KD

#include "CEnemy.h"

///
///Klasa reprezentująca bossa
///
class CBoss : public CEnemy
{
public:
	///
	///Konstruktor
	///
	CBoss();
	
	///
	///Destruktor
	///
	~CBoss();

	///
	///Metoda zaczynająca atak kulami ognia
	///
	void fireball();

	///
	///Metoda kończąca atak kulami ognia
	///
	void stopFireball();

	///
	///Metoda regenerująca życie
	///
	void regenHealth();

private:
	bool m_fireball; //atakuje kulami ognia

};

#endif //CBOSS_H_KD

