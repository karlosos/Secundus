//#include <iostream>
//#include "CTermos.h"
//
//int main ()
//{
///*
//Zadanie domowe:
//
//Zaproponuj implementacjê klasy CTermos,
//która reprezentuje "coœ", co potrafi
//"zarz¹dzaæ" temperatur¹ tego, co zawiera.
//Termos posiada element otwieraj¹cy/zamykaj¹cy
//(np. korek, kapsel, itp)
//
//termos posiada publiczny interface,
//który podaje temparaturê jego wnêtrza.
//
//
//Uwaga.
//Termos posiada pojemnik <vector>,
//do którego wk³adamy paczki z p³ynem.
//
//pliki *.h i *.cpp wyœlij na adres
//jackflower@poczta.onet.pl
//
//
//Klasa CTermos				-		zrobione
//zarz¹dzanie temperatur¹		-		zrobione
//w³¹cznik(kapsel)			-		zrobione
//metoda pobieraj¹ca temp		-		zrobione
//
//
//Opis obiektu klasy CTermos:
//Temperatury:
//	- posiada funkcjê aktualizuj¹c¹ temperaturê (œrednia temperatur wszystkich cieczy w termosie)
//	- posiada funkcjê zwracaj¹c¹ temperaturê
//W³¹cznik (kapsel):
//	- u¿y³em klasy w³¹cznika wykonanej na lekcji - po co siê mêczyæ
//Pojemnik:
//	- w pojemniku mo¿emy przechowywaæ obiekty typu CCiecz
//		CCiecz:
//			- domyœlnie tworzy ciecz o temperaturze 36.6
//			- konstruktor który tworzy ciecz z podan¹ temperatur¹
//			- metoda zwracaj¹ca temperaturê cieczy
//	- metoda która nape³nia pojemnik obiektami typu CCiecz
//
//Do zrobienia/poprawienia:
//	- metoda s³u¿¹ca do opró¿nienia pojemnika (plik CTermos.cpp linia 29
//*/
//
//	CTermos termos;					//Tworze obiekt typu CTermos
//	CCiecz ciecz1(34.0f);			//Tworze obiekty typu CCiecz, które wlejê do termos
//	CCiecz ciecz2(35.0f);
//	CCiecz ciecz3(36.0f);
//	CCiecz ciecz4(37.0f);
//
//	termos.FillTermos(ciecz1);		//Wlewam ciecze do termosu
//	termos.FillTermos(ciecz2);
//	termos.FillTermos(ciecz3);
//	termos.FillTermos(ciecz4);
//
//	termos.UpdateTemperature();		//Aktualizuje temperaturê w termosie
//	std::cout << termos.GetTemp();	//Wyœwietlam temperaturê w termosie
//
//	system("pause");
//	return 0;
//}