//Napisz program, który wczytuje ze standardowego wejœcia 
//trzy liczby ca³kowite i wypisuje na standardowym wyjœciu
//najwiêksz¹ z ich wartoœci.

#include <iostream>
int main()
{
	int l1 = 0;
	int l2 = 0;
	int l3 = 0;

	int najwyzsza = 0;

	std::cin >> l1;
	std::cin >> l2;
	std::cin >> l3;

	if (l1 > l2 && l1 > l3)
		najwyzsza = l1;
	else if (l2 > l1 && l2 > l3)
		najwyzsza = l1;
	else if (l3 > l1 && l3 > l2)
		najwyzsza = l3;
	std::cout << "Najwyzsza liczba to " << l3 << std::endl;
	std::system("pause");

	return 0;
}