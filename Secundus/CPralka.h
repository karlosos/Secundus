#ifndef H_PRALKA
#define H_PRALKA

#include "CSwitch.h"

///
///Klasa reprezentuje pralkê
///
class CPralka
{
public:

	///
	///Konstruktor
	///
	CPralka();

	///
	///Destruktor
	///
	~CPralka();

	///
	///Metoda steruje w³¹cznikiem pralki
	///
	///@param parametr - stan on/off
	///
	void ChangeState(bool parametr);

	///
	///Metoda zwraca stan pracy pralki on/off
	///
	bool CheckPralka();

	///
	///Metoda uruchamia pralkê
	///
	void Start();

	///
	///Metoda wy³¹cza pralkê
	///
	void Stop();

	///
	///Metoda zwraca wagê pralki
	///

	float GetWaga();

	///
	///Metoda ustawia wagê pralki
	///
	///@param waga - waga pralki
	///

	void SetWaga(float waga);

private:
	
	
	CSwitch m_wlacznik;	//w³¹cznik
	float m_waga;		//waga pralki

};

#endif //H_PRALKA