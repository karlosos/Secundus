//Firma CompPixels, zajmuje si� przetwarzaniem danych. 
//Poproszono Ciebie o pomoc. Twoje zadanie polega na 
//napisaniu prototypu �programu�, zawieraj�cego funkcj� 
//(metod�), kt�rej zadaniem jest zmiana liczba w zbiorze
//w taki spos�b, �e liczby dodatnie �staj�� si� ujemnymi i odwrotnie.
#include <iostream>

void zamiana(int tablica[]);

int main() 
{
	//Inicjalizacja tablicy
	int tablica[10] = {1,2,-3,4,-5,6,-7,8,-9,10};

	//Wyswietlanie tablicy
	std::cout << "Tablica na poczatku: ";
	for (int i=0; i<10; i++) 
	{
		std::cout << tablica[i] << " ";
	}

	//Zamiana tablicy
	zamiana(tablica);

	//Wyswietlanie tablicy
	std::cout << std::endl <<"Tablica po przejsciu przez metode: ";
	for (int i=0; i<10; i++) 
	{
		std::cout << tablica[i] << " ";
	}

	std::cout << std::endl;
	std::system("pause");
	return 0;
}

void zamiana(int tablica[]) 
{
	for (int i=0; i<10; i++)
	{
		tablica[i] = tablica[i] * (-1);
	}
}