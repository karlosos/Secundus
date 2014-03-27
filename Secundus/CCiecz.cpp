#include "CCiecz.h"

//Konstruktor
CCiecz::CCiecz(void)
	:
	m_temp(36.6f)
{
}

//Konstruktor z parametrem temperatury
CCiecz::CCiecz(float _temp)
	:
	m_temp(_temp)
{
}

//Destruktor
CCiecz::~CCiecz(void)
{
}

///Metoda pobieraj¹ca temperaturê cieczy
float CCiecz::GetTemp()
{
	return m_temp;
}