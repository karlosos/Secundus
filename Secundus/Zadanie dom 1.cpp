//#include <iostream>	
//#include "CBeben.h"
//
//int main ()
//{
//	CBeben beben;
//
//	float waga;
//	int srednica;
//	int glebokosc;
//
//	int czerwony;
//	int zielony;
//	int niebieski;
//
//	std::cout << "Podaj wage bebna (kg): ";
//	std::cin >> waga;
//	std::cout << std::endl <<"Podaj srednica (cm): ";
//	std::cin >> srednica;
//	std::cout << std::endl <<"Podaj glebokosc (cm): ";
//	std::cin >> glebokosc;
//
//	std::cout << std::endl << "Zdefiniujmy kolor w RGB. " << "Podaj wartoĹ›Ä‡ czerwieni (od 0 do 255): ";
//	std::cin >> czerwony;
//		while (czerwony > 255) 
//		{
//			std::cout << std::endl << "Blad! Podaj jeszcze raz: ";
//			std::cin >> czerwony;
//		}
//
//	std::cout << std::endl << "Zdefiniujmy kolor w RGB. " << "Podaj wartoĹ›Ä‡ zieleni (od 0 do 255): ";
//	std::cin >> zielony;
//		while (zielony > 255) 
//		{
//			std::cout << std::endl << "Blad! Podaj jeszcze raz: ";
//			std::cin >> zielony;
//		}
//
//	std::cout << std::endl << "Zdefiniujmy kolor w RGB. " << "Podaj wartoĹ›Ä‡ niebieskiego (od 0 do 255): ";
//	std::cin >> niebieski;
//		while (niebieski > 255) 
//		{
//			std::cout << std::endl << "Blad! Podaj jeszcze raz: ";
//			std::cin >> niebieski;
//		}
//
//
//	beben.setWeight(waga);
//	beben.setDepth(glebokosc);
//	beben.setDiam(srednica);
//	beben.setColor(czerwony, zielony, niebieski);
//
//	std::cout << std::endl << "Twoj beben wazy " << beben.getWeight() << " kg, ma " << beben.getDepth() << " cm glebokosci i " << beben.getDiam() << " cm srednicy." << std::endl;
//	std::cout << "Twoj beben ma kolor: R(" << beben.getColorR() << "), G(" << beben.getColorG() << "), B(" << beben.getColorB() << ").";
//
//	system("pause");
//
//
//	return 0;
//}
//
//test, nie wyboru