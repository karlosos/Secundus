//Jej zadaniem jest napisanie programu, który ma 
//losowo zape³niæ salê kinow¹ widzami. Program 
//musi przewidzieæ sytuacjê, gdy nie wszystkie 
//miejsca podczas projekcji s¹ zajête. Aby w miarê 
//mo¿liwoœci bazowaæ na zdarzenia losowych, w 
//zaproponowanej strukturze swojego programu 
//umieœci³a zbiór zawieraj¹cy kilkadziesi¹t imion 
//(zak³adamy, ¿e s¹ to imiona polskie). Na tej 
//podstawie losuj¹c miejsca na sali kinowej,
//umieszcza w niej widzów, (kobiety i mê¿czyŸni).
//Sama te¿ opracowa³a metodê, która po wylosowaniu 
//imienia ze zbioru imion, wyznacza p³eæ osoby, która 
//dane miejsce zajmuje.

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main()
{
	using namespace std;
	int tab[15][20];
	vector <string> ludzie;
	int los;
	int m = 0;
	int k = 0;
	int wszyscy = 0;
	int wolne = 0;

	ludzie.push_back("Kasia");
	ludzie.push_back("Basia");
	ludzie.push_back("Katarzyna");
	ludzie.push_back("Malgorzata");
	ludzie.push_back("Wieslawa");
	ludzie.push_back("Bronislawa");
	ludzie.push_back("Natalia");
	ludzie.push_back("Justyna");
	ludzie.push_back("Wiktoria");
	ludzie.push_back("Zuzanna");
	ludzie.push_back("Weronika");
	ludzie.push_back("Monika");
	ludzie.push_back("Marta");
	ludzie.push_back("Jessica");
	ludzie.push_back("Karol");
	ludzie.push_back("Kacper");
	ludzie.push_back("Lukasz");
	ludzie.push_back("Mateusz");
	ludzie.push_back("Remigiusz");
	ludzie.push_back("Piotr");
	ludzie.push_back("Bartosz");
	ludzie.push_back("Mikolaj");
	ludzie.push_back("Daniel");
	ludzie.push_back("Blazej");
	ludzie.push_back("Konrad");
	random_shuffle(ludzie.begin(), ludzie.end());

	random_device rd;								// access hardware RNG
	default_random_engine e(rd());					// seed the software PRNG
	uniform_real_distribution<> d(0, 30);			// range

	for(int i=0; i<15; i++)
	{
		for(int j=0; j<20; j++)
		{
			los = d(e);
			if (los > 24) {
				tab[i][j] = 0;
			} else {
				if (ludzie[los].back() == 97) 
				{ 
					tab[i][j] = 1;
				} 
				else 
				{
					tab[i][j] = 2;
				}
			}
		}
	}

	for(int i=0; i<15; i++)
	{
		for(int j=0; j<20; j++)
		{
			if (tab[i][j] == 1)
			{
				k++;
				wszyscy++;
			} else if (tab[i][j] == 2) 
			{
				m++;
				wszyscy++;
			} else if (tab[i][j] == 0)
			{
				wolne++;
			}
		}
	}

	float proc_k = ((float)k/(float)wszyscy)*100;
	float proc_m = ((float)m/(float)wszyscy)*100;
	float proc_miejsc = ((float)wolne/300.f)*100;

	cout << "W kinie jest: " << k << " kobiet. Stanowia " << proc_k << " procent." << endl;
	cout << "W kinie jest: " << m << " mezczyzn. Stanowia " << proc_m << " procent." << endl;
	cout << "Jest " << wolne << " wolnych miejsc. Jesto to " << proc_miejsc << " procent."<< endl;
	
	system("pause");
	return 0;
}