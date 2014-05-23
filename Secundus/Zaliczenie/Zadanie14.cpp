//Napisz program, który po wprowadzeniu wielkoœci 
//tablicy oraz wartoœci poszczególnych elementów 
//przez u¿ytkownika skopiuje tablice nr 1 do tablicy 
//nr 2 w odwróconej kolejnoœci, po czym wyœwietli 
//zawartoœæ tablicy numer 2.

#include <iostream>
int main() 
{
	using namespace std;
	int wielkosc = 10;
	int liczba = 0;
	//cout << "Podaj wielkosc tablicy: ";
	//cin >> wielkosc;

	int tab3[10];
	int *tab = new int;
	int *tab2 = new int[wielkosc];

	for (int i=0; i<wielkosc; i++)
	{
		cout << "Wprowadz wartosc nr " << i << ": ";
		cin >> liczba;
		tab[i] = liczba;
		liczba = 0;
	}

	//nie potrafie myslec
	system("pause");
}