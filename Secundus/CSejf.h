#ifndef CSEJF_H_KAROL
#define CSEJF_H_KAROL

#include "CPralka.h"
#include <vector>//biblioteka STL
//Standard
//Template
//Library

class CSejf
{
public:
	///
	///Konstruktor
	///
	CSejf(void);

	///
	///Konstruktor kopiujacy
	///
	///@param copySejf - sta³a referencja na obiekt tej klasy
	///
	CSejf(const CSejf & copySejf);
	


	///
	///Destruktor
	///
	~CSejf(void);


	///
	///Metoda sprawdza, czy mo¿na otworzyæ sejf
	///
	///@param topsecret - kod dostepu
	///

	const bool TryOpen(int topsecret) const;

	///
	///Metoda dodaje do kontenera obiekt klasy CPralka
	///
	///@param pralka - obiekt klasy CPralka
	///

	void AddPralka(CPralka pralka);
private:

	const int m_topsecret;
	std::vector<CPralka> pojemnik_na_pralki;
};

#endif //CSEJF_H_KAROL
