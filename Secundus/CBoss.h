#ifndef CBOSS_H_KD
#define CBOSS_H_KD

#include "CEnemy.h"

///
///Klasa reprezentuj�ca bossa
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
	///Metoda zaczynaj�ca atak kulami ognia
	///
	void fireball();

	///
	///Metoda ko�cz�ca atak kulami ognia
	///
	void stopFireball();

	///
	///Metoda regeneruj�ca �ycie
	///
	void regenHealth();

private:
	bool m_fireball; //atakuje kulami ognia

};

#endif //CBOSS_H_KD

