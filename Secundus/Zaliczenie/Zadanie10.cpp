//Napisz program, który wczytuje ze 
//standardowego wejœcia liczbê 
//ca³kowit¹ dodatni¹ podan¹ w 
//systemie binarnym, a na standardowe 
//wyjœcie wypisujê j¹ w postaci dziesiêtnej.
#include<iostream>
using namespace std;
 
int main()
{
    long bin, dec = 0, rem, num, baza = 1;
 
    cout << "Wpisz binarne : ";
    cin >> num;
    bin = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * baza;
        baza = baza * 2;
        num = num / 10;
    }

    cout << "W systemie dziesietnym liczba binarna " << bin << " to : " << dec << endl;
	system("pause");
    return 0;
}