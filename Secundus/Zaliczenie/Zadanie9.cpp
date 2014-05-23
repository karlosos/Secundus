//Napisz program, który wczyta ze standardowego wejœcia 
//tekst do analizy. Dla ka¿dej litery obliczy liczbê
//jej wyst¹pieñ w tekœcie. Wypisze wynik na standardowe wyjœcie.

#include <iostream>
#include <string>
int main()
{
	std::string tekst;
	std::cout << "Podaj tekst: ";
	std::cin >> tekst;

	int tab[123];
	for (int i=0; i<123; i++)
	{
		tab[i] = 0;
	}

	for (int i=0; i<tekst.length(); i++)
	{
		for (int j=65; j<=90; j++)
		{
			if(tekst[i] == j) 
			{
				tab[j]++;
			}
		}

		for (int k=97; k<=122; k++)
		{
			if(tekst[i] == k) 
			{
				tab[k]++;
			}
		}		
	}

	for (int i=0; i<123; i++)
	{
		if (tab[i]>0) 
		{
			std::cout << "Litera " << (char) i << " wystapila " << tab[i] << " razy." << std::endl; 
		}
	}

	std::system("pause");
	return 0;
}