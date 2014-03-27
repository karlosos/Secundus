#ifndef CSUPERVEHICLE_H_KD
#define CSUPERVEHICLE_H_KD
#include "CVehicle.h"

///
///Klasa repreentuje super pokazd
///dziedziczy z klasy CVehicle
///

	//klasa pochodna  //klasa bazowa
class CSuperVehicle : public CVehicle
{
public:
	///
	///Konstruktor
	///
	CSuperVehicle();

	///
	///Destruktor
	///
	~CSuperVehicle();

private:
	bool m_aircondition; //klimatyzacja
};
#endif //CSUPERVEHICLE_H_KD
