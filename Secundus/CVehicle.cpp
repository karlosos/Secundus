#include "CVehicle.h"

//Konstruktor
CVehicle::CVehicle()
	:m_speed(0.0f)
{
}

//Destruktor
CVehicle::~CVehicle()
{
	m_speed = 0.0f;
}

//Metoda zwraca predkosc
float CVehicle::getSpeed()
{
	return m_speed;
}

//Metoda ustawia predkosc
void CVehicle::setSpeed(float _speed)
{
	//troszke AI
	if(_speed < 0) return;
	m_speed= _speed;
}
