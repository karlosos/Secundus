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
	int tab[122];
	for (int i=0; i<122; i++)
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

	
int A = tab[65];
int B = tab[66];
int C = tab[67];
int D = tab[68];
int E = tab[69];
int F = tab[70];
int G = tab[71];
int H = tab[72];
int I = tab[73];
int J = tab[74];
int K = tab[75];
int L = tab[76];
int M = tab[77];
int N = tab[78];
int O = tab[79];
int P = tab[80];
int Q = tab[81];
int R = tab[82];
int S = tab[83];
int T = tab[84];
int U = tab[85];
int V = tab[86];
int W = tab[87];
int X = tab[88];
int Y = tab[89];
int Z = tab[90];

	return 0;
}