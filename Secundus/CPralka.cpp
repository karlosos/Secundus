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

//Metoda steruje w��cznikiem pralki
void CPralka::ChangeState(bool parametr)
{
	m_wlacznik.Switch(parametr);
}

//Metoda zwraca stan pracy pralki on/off
bool CPralka::CheckPralka()
{
	return m_wlacznik.GetState();
}


//Metoda uruchamia pralk�
void CPralka::Start()
{
	this->m_wlacznik.Switch(true);
}

///Metoda wy��cza pralk�
void CPralka::Stop()
{
	this->m_wlacznik.Switch(false);
}

///Metoda zwraca wag� pralki
float CPralka::GetWaga()
{
	return m_waga;
}

///Metoda ustawia wag� pralki
void CPralka::SetWaga(float waga)
{
	m_waga = waga;
}