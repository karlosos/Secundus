//#include <iostream>
//#include "CTermos.h"
//
//int main ()
//{
///*
//Zadanie domowe:
//
//Zaproponuj implementacj� klasy CTermos,
//kt�ra reprezentuje "co�", co potrafi
//"zarz�dza�" temperatur� tego, co zawiera.
//Termos posiada element otwieraj�cy/zamykaj�cy
//(np. korek, kapsel, itp)
//
//termos posiada publiczny interface,
//kt�ry podaje temparatur� jego wn�trza.
//
//
//Uwaga.
//Termos posiada pojemnik <vector>,
//do kt�rego wk�adamy paczki z p�ynem.
//
//pliki *.h i *.cpp wy�lij na adres
//jackflower@poczta.onet.pl
//
//
//Klasa CTermos				-		zrobione
//zarz�dzanie temperatur�		-		zrobione
//w��cznik(kapsel)			-		zrobione
//metoda pobieraj�ca temp		-		zrobione
//
//
//Opis obiektu klasy CTermos:
//Temperatury:
//	- posiada funkcj� aktualizuj�c� temperatur� (�rednia temperatur wszystkich cieczy w termosie)
//	- posiada funkcj� zwracaj�c� temperatur�
//W��cznik (kapsel):
//	- u�y�em klasy w��cznika wykonanej na lekcji - po co si� m�czy�
//Pojemnik:
//	- w pojemniku mo�emy przechowywa� obiekty typu CCiecz
//		CCiecz:
//			- domy�lnie tworzy ciecz o temperaturze 36.6
//			- konstruktor kt�ry tworzy ciecz z podan� temperatur�
//			- metoda zwracaj�ca temperatur� cieczy
//	- metoda kt�ra nape�nia pojemnik obiektami typu CCiecz
//
//Do zrobienia/poprawienia:
//	- metoda s�u��ca do opr�nienia pojemnika (plik CTermos.cpp linia 29
//*/
//
//	CTermos termos;					//Tworze obiekt typu CTermos
//	CCiecz ciecz1(34.0f);			//Tworze obiekty typu CCiecz, kt�re wlej� do termos
//	CCiecz ciecz2(35.0f);
//	CCiecz ciecz3(36.0f);
//	CCiecz ciecz4(37.0f);
//
//	termos.FillTermos(ciecz1);		//Wlewam ciecze do termosu
//	termos.FillTermos(ciecz2);
//	termos.FillTermos(ciecz3);
//	termos.FillTermos(ciecz4);
//
//	termos.UpdateTemperature();		//Aktualizuje temperatur� w termosie
//	std::cout << termos.GetTemp();	//Wy�wietlam temperatur� w termosie
//
//	system("pause");
//	return 0;
//}