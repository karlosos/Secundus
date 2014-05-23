#include <iostream>
#include <random>

using namespace std;
int **generujParking(int wysokosc, int szerokosc);
void sprawdz(int **tab, int wysokosc, int szerokosc);

int main() 
{
	int szerokosc = 0;
	int wysokosc = 0;

	std::cout << "Podaj szerokosc parkingu: ";
	std::cin >> szerokosc;
	szerokosc += 2;
	std::cout << "Podaj wysokosc parkingu: ";
	std::cin >> wysokosc;
	wysokosc++;

	int **tab = generujParking(wysokosc, szerokosc);

	sprawdz(tab, wysokosc, szerokosc);

	std::system("pause");
	return 0;
}

int **generujParking(int wysokosc, int szerokosc) 
{

	int **tab = new int*[wysokosc];
	for(int i = 0; i < wysokosc; i++) 
	{
		tab[i] = new int[szerokosc];
	}

	//Losowanie
	random_device rd;								// access hardware RNG
	default_random_engine e(rd());					// seed the software PRNG
	uniform_real_distribution<> d(0, 10);			// range
	//Zapelnianie tablicy
	for(int i=0; i<wysokosc; i++)
	{
		for(int j=0; j<szerokosc; j++)
		{
			tab[i][j] = d(e);							// sila wiatru
		}
	}

	//Tworzenie ramki
	for(int i=0; i<szerokosc; i++)
	{
			tab[0][i] = 0;
	}

	for(int i=0; i<wysokosc; i++)
	{
			tab[i][0] = 0;
	}

	for(int i=0; i<wysokosc; i++)
	{
			tab[i][szerokosc-1] = 0;
	}

	//Wyswietlanie tablicy
	for(int i=0; i<wysokosc; i++)
	{
		for(int j=0; j<szerokosc; j++)
		{
			std::cout << tab[i][j];
		}
		std::cout << std::endl;
	}

	return tab;
}

void sprawdz(int **tab, int wysokosc, int szerokosc) 
{	
	// Zmienna przechowujaca sume ciezaru aut
	int suma = 0;

	for (int i=0; i<wysokosc; i++)
	{
		for (int j=0; j<szerokosc; j++)
		{
			if(tab[i][j] != 0) 
			{
				//Jezeli jest przy gornej krawedzi
				if(i==1) 
				{
					std::cout << "Samochod z pola X: " << j << " Y: " << i << " moze wyjechac gora" << endl;
				} 

				//Jezeli jest przy lewej krawedzi
				else if(j==1)
				{
					std::cout << "Samochod z pola X: " << j << " Y: " << i << " moze wyjechac w lewo" << endl;
				}

				//Jezeli jest przy prawej krawedzi
				else if(j==(szerokosc-2))
				{
					std::cout << "Samochod z pola X: " << j << " Y: " << i << " moze wyjechac w prawo" << endl;
				}

				else 
				{
					//Zlicza sume ciezaru aut ponad samochodem
					for(int k=i; k>0; k--) 
					{
						suma += tab[k][j];
					}

					//Jezeli moze przepchac
					if(tab[i][j] * 10 > suma) 
					{
						std::cout << "Samochod z pola X: " << j << " Y: " << i << " moze przepychac auta z przodu" << endl;
					}
					//Nie moze przepchac
					else 
					{
						std::cout << "Samochod z pola X: " << j << " Y: " << i << " nie moze przepchac aut" << endl;
					}

					//Czysci sume ciezaru aut
					suma = 0;
				}
			}
		}
	}
}