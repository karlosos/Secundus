#include "CUtilities.h"

//Konstruktor
CUtilities::CUtilities(void)
{
	//inicjujemy tablic� zerami - zerujemy j�
	for (int i = 0; i < 10; i++) 
		this->m_tab[i] = 0;
}

//Destruktor
CUtilities::~CUtilities(void)
{
	//destruktor zeruje tablic�
	for (int i = 0; i< 10; i++)
		this->m_tab[i] = 0;
}
