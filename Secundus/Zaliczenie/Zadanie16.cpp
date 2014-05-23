//Utwórz metodê (funkcjê) obliczaj¹c¹ sumê s¹siadów pola o
//podanych wspó³rzêdnych.
#include <iostream>
int suma(int tab[5][5], int x, int y);

int main()
{
	int tab[5][5];
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			tab[i][j]=1;
		}
	}

	int suma_sasiadow = suma(tab, 2, 2);
	return 0;
}

int suma(int tab[5][5], int x, int y)
{
	int suma = 0;
	suma += tab[y-1][x];
	suma += tab[y+1][x];
	suma += tab[y][x+1];
	suma += tab[y][x-1];
	suma += tab[y+1][x-1];
	suma += tab[y-1][x-1];
	suma += tab[y+1][x+1];
	suma += tab[y-1][x+1];

	return suma;
}