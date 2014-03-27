#ifndef H_SEJF
#define H_SEJF

#include "CPralka.h"
#include <vector>//biblioteka STL
//S tandard
//T emplate
//L ibrary

///
///Klasa reprezentuje sejf
///
class CSejf
{
public:

	///
	///Konstruktor
	///
	CSejf(void);

	///
	///Konstruktor kopiuj¹cy
	///
	///
	///@param & copySejf - sta³a referencja na ob iekt tej klasy
	///
	CSejf(const CSejf & copySejf);

	///
	///Destruktor
	///
	~CSejf(void);

	///
	///Metoda sprawdza, czy mo¿na otworzyæ sejf
	///
	///@param topsecret - kod dostêpu
	///
	const bool TryOpen(int topsecret) const;

	///
	///Metoda dodaje do kontenera obiekt klasy CPralka
	///
	///@param pralka - obiekt klasy CPralka
	///
	void AddPralka(CPralka pralka);

private:
	
	const int m_topsecret;	//kod dostêpu do sejfu
	std::vector<CPralka> pojemnik_na_pralki;
	
};

#endif //H_SEJF