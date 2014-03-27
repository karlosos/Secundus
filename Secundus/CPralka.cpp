#include "CPralka.h"

//Konstruktor
CPralka::CPralka()
	:
	m_waga(0.0f)
{
}

//Destruktor
CPralka::~CPralka()
{
}

//Metoda steruje w³¹cznikiem pralki
void CPralka::ChangeState(bool parametr)
{
	m_wlacznik.Switch(parametr);
}

//Metoda zwraca stan pracy pralki on/off
bool CPralka::CheckPralka()
{
	return m_wlacznik.GetState();
}


//Metoda uruchamia pralkê
void CPralka::Start()
{
	this->m_wlacznik.Switch(true);
}

///Metoda wy³¹cza pralkê
void CPralka::Stop()
{
	this->m_wlacznik.Switch(false);
}

///Metoda zwraca wagê pralki
float CPralka::GetWaga()
{
	return m_waga;
}

///Metoda ustawia wagê pralki
void CPralka::SetWaga(float waga)
{
	m_waga = waga;
}