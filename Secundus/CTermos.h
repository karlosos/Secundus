#ifndef CTERMOS_H_KD
#define CTERMOS_H_KD

#include <vector>
#include "CSwitch.h"
#include "CCiecz.h"

///
///Klasa reprezentująca termos
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
	///Metoda steruje mechaniznem otwierającym/zamykającym
	///
	///@param parametr - stan on/off
	///
	void ChangeState(bool parametr);

	///
	///Metoda zwraca stan mechanizmu otwierająca/zamykającego
	///
	bool CheckTermos();
	
	///
	///Metoda wylewająca zawartość termosu
	///
	void EmptyTermos();

	///
	///Metoda nalewająca do termosu obiekt typu ciecz
	///
	void FillTermos(CCiecz _ciecz);

	///
	///Metoda aktualizująca temperaturę termosu
	///
	void UpdateTemperature();

	///
	///Metoda pobiera temperaturę termosu
	///
	float GetTemp();

private:
	float m_temperature;					//zmienna temperatury
	CSwitch m_wlacznik;						//włącznik
	std::vector<CCiecz> pojemnik_na_ciecze; //pojemnik na ciecze
};

#endif //CTERMOS_H_KD