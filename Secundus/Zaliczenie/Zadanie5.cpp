////Napisz program, kt�ry wczytuje ze 
////standardowego wej�cia jedno s�owo 
////d�ugo�ci od 1 do 100 znak�w i wypisuje 
////na standardowe wyj�cie s�owo o odwrotnej 
////kolejno�ci liter.
//
//#include <iostream>
//
//int main()
//{
//	char slowo[100];
//	std::cin >> slowo;
//	int liczba_znakow = 0;
//	for (int i=0; i<100; i++)
//	{
//		if(slowo[i]==NULL)
//		{
//			i=100;
//		}
//
//		if(i!=100)
//		{
//			liczba_znakow++;
//		}
//	}
//
//	char *odwrocone = new char[liczba_znakow];
//
//	int j=(liczba_znakow-1);
//	for (int i=0; i<liczba_znakow; i++)
//	{
//		odwrocone[i] = slowo[j];
//		j--;
//	}
//	odwrocone[liczba_znakow] = slowo[liczba_znakow];
//	std::cout << odwrocone << endl;
//	std::system("pause");
//	return 0;
//}