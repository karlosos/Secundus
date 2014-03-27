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
//Parametr table[] - tablica wchodzi do metody
//jako  o r y g i n a ³
void CSort::BubleSort(int table[], const int size)
{
	int i;		//zmienna pomocznicza
	int j;		//zmienna pomocznicza
	int tmp;	//zmienna pomocznicza

	//sortujemy - metoda sortowania b¹belkowego
	
	for(i=0; i< size; i++)
		for (j=0; j<size; j++)
		{
			if(table[j] > table[j+1])
			{
				tmp = table[j+1];
				table[j+1] = table [j];
				table[j] = tmp;
			}
		}
}
