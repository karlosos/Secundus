#ifndef CTERMOS_H_KD
#define CTERMOS_H_KD

#include <vector>
#include "CSwitch.h"
#include "CCiecz.h"

///
///Klasa reprezentuj¹ca termos
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
	///Metoda steruje mechaniznem otwieraj¹cym/zamykaj¹cym
	///
	///@param parametr - stan on/off
	///
	void ChangeState(bool parametr);

	///
	///Metoda zwraca stan mechanizmu otwieraj¹ca/zamykaj¹cego
	///
	bool CheckTermos();
	
	///
	///Metoda wylewaj¹ca zawartoœæ termosu
	///
	void EmptyTermos();

	///
	///Metoda nalewaj¹ca do termosu obiekt typu ciecz
	///
	void FillTermos(CCiecz _ciecz);

	///
	///Metoda aktualizuj¹ca temperaturê termosu
	///
	void UpdateTemperature();

	///
	///Metoda pobiera temperaturê termosu
	///
	float GetTemp();

private:
	float m_temperature;					//zmienna temperatury
	CSwitch m_wlacznik;						//w³¹cznik
	std::vector<CCiecz> pojemnik_na_ciecze; //pojemnik na ciecze
};

#endif //CTERMOS_H_KD