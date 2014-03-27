#ifndef H_PRALKA
#define H_PRALKA

#include "CSwitch.h"

///
///Klasa reprezentuje pralk�
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
	///Metoda steruje w��cznikiem pralki
	///
	///@param parametr - stan on/off
	///
	void ChangeState(bool parametr);

	///
	///Metoda zwraca stan pracy pralki on/off
	///
	bool CheckPralka();

	///
	///Metoda uruchamia pralk�
	///
	void Start();

	///
	///Metoda wy��cza pralk�
	///
	void Stop();

	///
	///Metoda zwraca wag� pralki
	///

	float GetWaga();

	///
	///Metoda ustawia wag� pralki
	///
	///@param waga - waga pralki
	///

	void SetWaga(float waga);

private:
	
	
	CSwitch m_wlacznik;	//w��cznik
	float m_waga;		//waga pralki

};

#endif //H_PRALKA