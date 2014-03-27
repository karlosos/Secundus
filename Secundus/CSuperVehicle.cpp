#include "CSuperVehicle.h"

//Konstruktor
CSuperVehicle::CSuperVehicle()
:
	CVehicle(),				//konstruktor klasy bazowej
	m_aircondition(true)
//Najpierw wykonuje sie konstruktor klasy przodka
//grebosz - ksiazka
{
}

//Destruktor
CSuperVehicle::~CSuperVehicle()
{
	this->m_speed = 0.0f; //dziala dzieki protected
}
