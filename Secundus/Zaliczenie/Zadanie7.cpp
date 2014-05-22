////Utwórz metodê (funkcjê) obliczaj¹ca sumê 
////elementów pod przek¹tn¹ (zak³adamy, ¿e 
////tablica dwuwymiarowa ma tyle samo wierszy,
////co kolumn.
//#include <iostream>
//
//int main()
//{
//	int tab[20][20];
//	int suma = 0;
//	//Zapelnianie tablicy
//	for (int i=0; i<20; i++)
//	{
//		for (int j=0; j<20; j++)
//		{
//			tab[i][j] = 1;
//		}
//	}
//
//	for (int i=0; i<20; i++)
//	{
//		for (int j=0; j<i; j++)
//		{
//			suma += tab[i][j];
//		}
//	}
//
//	std::cout << "Suma dolnej czesci to: " << suma << std::endl;
//	std::system("pause");
//	return 0;
//}