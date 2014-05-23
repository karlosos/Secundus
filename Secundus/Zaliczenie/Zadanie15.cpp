//Utwórz metodê (funkcjê) wyœwietlaj¹c¹ odchylenie standardowe 
//na podstawie danych zawartych w tablicy.
#include <iostream>

float odchylenie(int tab[], int msize);

int main() 
{
	int tab[] = {2,5,1,3};
	int size = sizeof(tab)/sizeof(int);
	float odchyl = odchylenie(tab, size);

	return 0;
}

float odchylenie(int tab[], int msize)
{
	int suma = 0;
	float srednia;
	float wariancja;
	float wariancja_suma = 0;
	int size = msize;
	for (int i=0; i<size; i++)
	{
		suma += tab[i];
	}
	srednia = (float)suma/(float)size;

	for (int i=0; i<size; i++)
	{
		wariancja_suma += ((float)tab[i] - (float)srednia)*((float)tab[i] - (float)srednia);
	}

	wariancja = (float)wariancja_suma/(float)size;

	return sqrt((double)wariancja);
}