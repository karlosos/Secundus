#ifndef CSORT_H_KD
#define CSORT_H_KD

///
///Klasa statyczna zawieraj�ca
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
	///Statyczna metoda sortowania b�belkowego - wersja klasyczna
	///
	///@param table[] - tablica
	///
	///@param size - rozmiar tablicy
	///
	static void BubleSort(int table[], int size);
};

#endif //CSORT_H_KD
