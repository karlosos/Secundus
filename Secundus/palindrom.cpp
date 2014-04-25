/*
#include <iostream>;

int main () {

	//ZADANIE
	//PALINDROM

	char *palindrom = "kajak";
	char *pomocniczypal = palindrom;

	int dlugoscpal = 0;

	while (*pomocniczypal++) {
		dlugoscpal++;
	}

	char *reverted = new char[6];
	reverted[6] = EOF;

	int x = 0;
	for (int i=dlugoscpal - 1; i>=0; i--) {
		reverted[x] = palindrom[i];
		x++;
	}

	bool rowne = true;
	for (int i=0; i<dlugoscpal; i++) {
		if (reverted[i] != palindrom[i]) {
			rowne = false;
		}
	}

	int dsasd = 0;

}

*/