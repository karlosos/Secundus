#include "CTermos.h"

//Konstruktor
CTermos::CTermos(void)
	:
	m_temperature(0.0f)
{
}

//Destruktor
CTermos::~CTermos(void)
{
}

//Metoda steruje mechaniznem otwieraj�cym/zamykaj�cym
void CTermos::ChangeState(bool parametr)
{
	m_wlacznik.Switch(parametr);
}

//Metoda zwraca stan mechanizmu otwieraj�ca/zamykaj�cego
bool CTermos::CheckTermos()
{
	return m_wlacznik.GetState();
}
	
//Metoda wylewaj�ca zawarto�� termosu
void CTermos::EmptyTermos()
{
	//m_wlacznik.Switch(true);
	//pojemnik_na_ciecze.clear();
	//m_wlacznik.Switch(false);
}

//Metoda nalewaj�ca do termosu obiekt typu ciecz
void CTermos::FillTermos(CCiecz _ciecz)
{
	m_wlacznik.Switch(true);
	pojemnik_na_ciecze.push_back(_ciecz);
	m_wlacznik.Switch(false);
}

//Metoda aktualizuj�ca temperatur� termosu
void CTermos::UpdateTemperature()
{
	int sum = pojemnik_na_ciecze.size();				//ilo�� wszystkich "cieczy"
	float AllTemp = 0;									//suma wszystkich temperatur

	for (int i=0; i<sum; i++)					
	{
		AllTemp += pojemnik_na_ciecze[i].GetTemp();		//do sumy wszystkich temperatur dodawaj temperatury wszystkich obiekt�w w pojemniku
	}

	m_temperature = AllTemp / sum;						//zmiennej m_temperature przypisz �redni� temperatur
}

//Metoda pobiera temperatur� termosu
float CTermos::GetTemp()
{
	return m_temperature;
}