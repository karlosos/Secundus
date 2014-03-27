#ifndef CTERMOS_H_KD
#define CTERMOS_H_KD

#include <vector>
#include "CSwitch.h"
#include "CCiecz.h"

///
///Klasa reprezentuj�ca termos
///
class CTermos
{
public:
	///
	///Konstruktor
	///
	CTermos(void);

	///
	///Destruktor
	///
	~CTermos(void);

	///
	///Metoda steruje mechaniznem otwieraj�cym/zamykaj�cym
	///
	///@param parametr - stan on/off
	///
	void ChangeState(bool parametr);

	///
	///Metoda zwraca stan mechanizmu otwieraj�ca/zamykaj�cego
	///
	bool CheckTermos();
	
	///
	///Metoda wylewaj�ca zawarto�� termosu
	///
	void EmptyTermos();

	///
	///Metoda nalewaj�ca do termosu obiekt typu ciecz
	///
	void FillTermos(CCiecz _ciecz);

	///
	///Metoda aktualizuj�ca temperatur� termosu
	///
	void UpdateTemperature();

	///
	///Metoda pobiera temperatur� termosu
	///
	float GetTemp();

private:
	float m_temperature;					//zmienna temperatury
	CSwitch m_wlacznik;						//w��cznik
	std::vector<CCiecz> pojemnik_na_ciecze; //pojemnik na ciecze
};

#endif //CTERMOS_H_KD