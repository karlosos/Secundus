#ifndef H_SORT
#define H_SORT

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
	static void BubleSort(int table[], const int size);

};

#endif //H_SORT