#include "CSwitch.h"

//Konstruktor
CSwitch::CSwitch(void)
:
	m_state(false)//konstruktor wy��cza w��cznik
{
}

//Destruktor
CSwitch::~CSwitch(void)
{
	m_state = false;
}

//Metoda w��cza/wy��cza urz�dzenie
void CSwitch::Switch(bool state)
{
	m_state = state;
}

//Metoda zwraca stan w��cznika
bool CSwitch::GetState()
{
	return m_state;
}
