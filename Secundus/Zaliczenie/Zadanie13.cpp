//Napisz program, kt�ry wczytuje ze standardowego wej�cia 
//liczb� ca�kowit� dodatni� podan� w systemie dziesi�tnym,
//a na standardowe wyj�cie wypisuj� j� w postaci binarnej (zerojedynkowej).

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