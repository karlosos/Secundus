#include "CUtilities.h"

//Konstruktor
CUtilities::CUtilities(void)
{
	//inicjujemy tablicê zerami - zerujemy j¹
	for (int i = 0; i < 10; i++) 
		this->m_tab[i] = 0;
}

//Destruktor
CUtilities::~CUtilities(void)
{
	//destruktor zeruje tablicê
	for (int i = 0; i< 10; i++)
		this->m_tab[i] = 0;
}
