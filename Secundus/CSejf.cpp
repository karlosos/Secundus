#include "CSejf.h"

//Konstruktor
CSejf::CSejf(void)
	:
		m_topsecret(89),
		pojemnik_na_pralki()
{
}

//przeci¹¿enie funkcji
//Konstruktor kopiujacy
CSejf::CSejf(const CSejf & copySejf)
	:
		m_topsecret(copySejf.m_topsecret),
		pojemnik_na_pralki(copySejf.pojemnik_na_pralki)
{

}
	

//Destruktor
CSejf::~CSejf(void)
{
}

//Metoda sprawdza, czy mo¿na otworzyæ sejf
bool const CSejf::TryOpen(int topsecret) const
{
	if(m_topsecret == topsecret)
		return true; //sejf otwarty
	return false; //sejf zamkniety
}
//Metoda dodaje do kontenera obiekt klasy CPralka
//@param pralka - obiekt klasy CPralka
void CSejf::AddPralka(CPralka pralka)
{
	pojemnik_na_pralki.push_back(pralka);
}