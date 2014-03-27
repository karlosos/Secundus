#include "CBoss.h"

//Konstruktor
CBoss::CBoss()
	:
CEnemy		(),
m_fireball	(false)
{
}

//Destruktor
CBoss::~CBoss()
{
}

//Metoda zaczynaj¹ca atak kulami ognia
void CBoss::fireball()
{
	m_fireball = true;
}

//Metoda koñcz¹ca atak kulami ognia
void CBoss::stopFireball()
{
	m_fireball = false;
}

//Metoda regeneruj¹ca ¿ycie
void CBoss::regenHealth()
{
	if (m_health < 80)
	{
	m_health += 1;
	}
}