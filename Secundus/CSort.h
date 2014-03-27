#ifndef CSORT_H_KD
#define CSORT_H_KD

///
///Klasa statyczna zawieraj¹ca
///metody statyczne
///
class CSort
{
public:
	///
	///Konstruktor
	///
	CSort(void);
	///
	///Destruktor
	///
	~CSort(void);

	///
	///Statyczna metoda sortowania b¹belkowego - wersja klasyczna
	///
	///@param table[] - tablica
	///
	///@param size - rozmiar tablicy
	///
	static void BubleSort(int table[], int size);
};

#endif //CSORT_H_KD
