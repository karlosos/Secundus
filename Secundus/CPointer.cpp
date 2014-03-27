#include "CPointer.h"


CPointer::CPointer(void) :
m_waga(3.0f)
{
}


CPointer::~CPointer(void)
{
}

const float CPointer::getWaga() const
{
	return m_waga;
}

void CPointer::setWaga(float waga) 
{
	m_waga = waga;
}