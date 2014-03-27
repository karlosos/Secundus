#include "CSwitch.h"

//Konstruktor
CSwitch::CSwitch(void)
:
	m_state(false)//konstruktor wy³¹cza w³¹cznik
{
}

//Destruktor
CSwitch::~CSwitch(void)
{
	m_state = false;
}

//Metoda w³¹cza/wy³¹cza urz¹dzenie
void CSwitch::Switch(bool state)
{
	m_state = state;
}

//Metoda zwraca stan w³¹cznika
bool CSwitch::GetState()
{
	return m_state;
}
