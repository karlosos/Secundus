#include "CEnemy.h"

//Konstruktor
CEnemy::CEnemy(void)
	:
m_positionX		(0),		//Pozycja X
m_positionY		(0),			//Pozycja Y
m_health		(100),				//�ycie
m_strength		(50),				//Si�a
m_attack		(false)	
{
}

//Destruktor
CEnemy::~CEnemy()
{
}

//Metoda zwraca pozycj� X
int CEnemy::getX()
{
	return m_positionX;
}

//Metoda zwraca pozycj� Y
int CEnemy::getY()
{
	return m_positionY;
}

//Metoda przesuwa przecwnika o wektor
void CEnemy::move(int _x, int _y)
{
	m_positionX = _x;
	m_positionY = _y;
}

//Metoda dzi�ki kt�rej przeciwnik atakuje
void CEnemy::attack()
{
	m_attack = true;
}

//Metoda dzi�ki kt�rej przeciwnik przestaje atakowa�
void CEnemy::stopAttack()
{
	m_attack = false;
}

//Metoda zwraca �ycie
int CEnemy::getHealth()
{
	return m_health;
}

//Metoda zwraca si�e
int CEnemy::getStrength()
{
	return m_strength;
}