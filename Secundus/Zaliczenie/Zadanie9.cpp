//Napisz program, kt�ry wczyta ze standardowego wej�cia 
//tekst do analizy. Dla ka�dej litery obliczy liczb�
//jej wyst�pie� w tek�cie. Wypisze wynik na standardowe wyj�cie.

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