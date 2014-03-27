#include <iostream>
#include "CPointer.h"
int main () 
{
	std::cout << std::endl << std::endl << "Zestaw #50" << std::endl;
	// Karol Dzia³owski klasa 2C zestaw #50
	//Zadanie 1	
	std::cout << std::endl << "Zadanie 1" << std::endl;
	int tab[10];
	int* p = &tab[1];
	*p = 8;
	std::cout << "Pod tab[1] znajduje sie: "<< tab[1] << std::endl;

	std::cout << std::endl << "Zadanie 2" << std::endl;
	//Zadanie 2
	int variable = 8;
	std::cout << "Zmienna wynosi: " << variable << std::endl;
	int* p_variable = &variable;
	*p_variable = 20;
	std::cout << "Po zmianie w wskaŸniku zmienna wynosi: "<< variable << std::endl;

	//Zadanie 3
	std::cout << std::endl << "Zadanie 3" << std::endl;
	int* p_first;
	int* p_second;
	int zmienna = 8;
	p_first = &zmienna;
	p_second = &zmienna;
	std::cout << "Zmienna wynosi: " << zmienna << std::endl;
	*p_first = 10;
	std::cout << "Po zmianie w wskaŸniku zmienna wynosi: " << zmienna << std::endl;
	std::cout << "Drugi wskaŸnik wynosi: " << *p_second << std::endl;

	//Zadanie 4
	std::cout << std::endl << "Zadanie 4" << std::endl;
	float* obj = new float;
	*obj = 3.034f;
	std::cout << "Zmienna: " << *obj << std::endl;
	delete obj;
	std::cout << "Zmienna: " << *obj << std::endl;
	obj = NULL;

	std::cout << std::endl << std::endl << "Zestaw #40" << std::endl;
	// Karol Dzia³owski klasa 2C zestaw #40
	//Zadanie 2	
	int tablica[10];
	int* p_tab;
	p_tab =  &tablica[0];
	for (int i=0; i<10; i++) {
		p_tab++;
		*p_tab = 0;
	}

	int test = 0;

	std::system("pause");
	return 0;
}