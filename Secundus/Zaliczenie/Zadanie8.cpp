//Utw�rz metod� (funkcj�), sprawdzaj�c�, czy 
//podany rok jest, by�, b�dzie rokiem przest�pnym.
#include <iostream>

bool czyPrzestepny(int rok);

int main() 
{
	int rok = 0;
	std::cout << "Podaj rok do sprawdzenia: ";
	std::cin >> rok;
	if (czyPrzestepny(rok)) 
		std::cout << "To jest rok przestepny" << std::endl;
	else 
		std::cout << "To nie jest rok przestepny" << std::endl;
	std::system("pause");
	return 0;
}
   
bool czyPrzestepny(int rok)
{   
    return ((rok%4 == 0 && rok%100 != 0) || rok%400 == 0);
}