#include "CSort.h"

//Konstruktor
CSort::CSort(void)
{
}

//Destruktor
CSort::~CSort(void)
{
}

//Statyczna metoda sortowania b¹belkowego - wersja klasyczna
void CSort::BubleSort(int table[], int size)
{
	int i;						// zmienne pomocniczze
	int j;						// zmienne pomocniczze
	int tmp;					// zmienne pomocniczze

	//sortujemy metoda sortowania babelkowego
	//Parametr table[] - tablica wchodzi do metody jako orygina³
	for (i = 0; i < size-1; i++)
		for (j = 0; j < size-1; j++)
		{
			if (table[j] > table[j+1])
			{
				tmp = table[j+1];
				table[j+1] = table [j];
				table [j] = tmp;
			}
		}
}