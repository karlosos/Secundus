//Napisz program, kt�ry wczytuje ze 
//standardowego wej�cia liczb� 
//ca�kowit� dodatni� podan� w 
//systemie binarnym, a na standardowe 
//wyj�cie wypisuj� j� w postaci dziesi�tnej.
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