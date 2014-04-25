int palindrom(char* napis);

int main() {

	char *napis = "kajak";

	palindrom(napis);

	return 0;
}

int palindrom(char* napis) {
	char *pomocniczy = napis;

	int dlugosc = 0;
	int polowa;
	while (*pomocniczy++) {
		dlugosc++;
	}

	polowa = dlugosc/2;
	
	for (int i=0, j=dlugosc-1; i<polowa; i++, j--) {
		if (napis[i] != napis[j]) {
			return false;
		}
	
	}
	return false;
}