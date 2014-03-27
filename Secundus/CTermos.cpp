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

//Metoda steruje mechaniznem otwieraj¹cym/zamykaj¹cym
void CTermos::ChangeState(bool parametr)
{
	m_wlacznik.Switch(parametr);
}

//Metoda zwraca stan mechanizmu otwieraj¹ca/zamykaj¹cego
bool CTermos::CheckTermos()
{
	return m_wlacznik.GetState();
}
	
//Metoda wylewaj¹ca zawartoœæ termosu
void CTermos::EmptyTermos()
{
	//m_wlacznik.Switch(true);
	//pojemnik_na_ciecze.clear();
	//m_wlacznik.Switch(false);
}

//Metoda nalewaj¹ca do termosu obiekt typu ciecz
void CTermos::FillTermos(CCiecz _ciecz)
{
	m_wlacznik.Switch(true);
	pojemnik_na_ciecze.push_back(_ciecz);
	m_wlacznik.Switch(false);
}

//Metoda aktualizuj¹ca temperaturê termosu
void CTermos::UpdateTemperature()
{
	int sum = pojemnik_na_ciecze.size();				//iloœæ wszystkich "cieczy"
	float AllTemp = 0;									//suma wszystkich temperatur

	for (int i=0; i<sum; i++)					
	{
		AllTemp += pojemnik_na_ciecze[i].GetTemp();		//do sumy wszystkich temperatur dodawaj temperatury wszystkich obiektów w pojemniku
	}

	m_temperature = AllTemp / sum;						//zmiennej m_temperature przypisz œredni¹ temperatur
}

//Metoda pobiera temperaturê termosu
float CTermos::GetTemp()
{
	return m_temperature;
}