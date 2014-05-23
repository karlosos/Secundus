//Napisz program, który wczytuje ze standardowego wejœcia 
//liczbê ca³kowit¹ dodatni¹ podan¹ w systemie dziesiêtnym,
//a na standardowe wyjœcie wypisujê j¹ w postaci binarnej (zerojedynkowej).

#include <iostream>
int main()
{
	using namespace std;
	
	int dec,rem,i=1,sum=0;
    cout<<"Wprowadz liczbe: ";
    cin>>dec;

    do {
        rem=dec%2;
        sum=sum + (i*rem);
        dec=dec/2;
        i=i*10;
    } while(dec>0);

    cout<<"Twoja liczba w systemie binarnym to: "<<sum<<endl;
	system("pause");
	return 0;
}