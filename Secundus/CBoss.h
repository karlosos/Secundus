#ifndef CBOSS_H_KD
#define CBOSS_H_KD

#include "CEnemy.h"

///
///Klasa reprezentuj¹ca bossa
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
	///Metoda zaczynaj¹ca atak kulami ognia
	///
	void fireball();

	///
	///Metoda koñcz¹ca atak kulami ognia
	///
	void stopFireball();

	///
	///Metoda regeneruj¹ca ¿ycie
	///
	void regenHealth();

private:
	bool m_fireball; //atakuje kulami ognia

};

#endif //CBOSS_H_KD

