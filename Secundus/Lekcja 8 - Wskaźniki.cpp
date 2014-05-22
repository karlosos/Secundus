	/////
	///// WskaŸniki, klasa CPointer.
	/////
	////int liczba = 10;
	//////int inny(23);

	////int *p_integer = NULL;
	////float *p_float = NULL;
	//CPointer *p_pointer = NULL;
	//CPointer *p_pointer2 = NULL;

	////int w1 = sizeof(p_integer);
	////int w2 = sizeof(p_float);
	////int w3 = sizeof(p_pointer);

	//CPointer frania;
	//frania.setWaga(10.0f);

	//CPointer hania;
	//hania.setWaga(20.0f);

	//p_pointer = &frania;
	//p_pointer->setWaga(30.33f);+

	//p_pointer2 = &hania;
	//p_pointer2->setWaga(30.33f);;


	//std::cout << *pointer << std::endl;

	//CPointer *pointer = new CPointer;
	//delete pointer;
	//pointer = NULL;

	//pointer = new CPointer;
	//if (pointer) {
	//	pointer->setWaga(10.0f);
	//	std::cout << "" << std::endl;
	//}

	//std::system("pause");


	/*int *pointer = new int;
	*pointer = 23;
	delete pointer;

	return 0;*/

	// Zadanie 1
	/*int x = 5;
	std::cout << x;
	int *p_x = &x;
	*p_x = 10;
	std::cout << x;

	std::system("pause");*/

	//// Zadanie 2
	//int tab[10];
	//int * point = tab;
	//for (int i = 0; i<10; i++) 
	//{

	//}

/*
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
*/