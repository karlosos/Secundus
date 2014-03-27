#ifndef CVEHICLE_H_KD
#define CVEHICLE_H_KD
///
///Klasa
///
class CVehicle
{
public:
	///
	///Konstruktor
	///
	CVehicle();

	///
	///Destruktor
	///
	virtual ~CVehicle();

	///
	///Metoda zwraca predkosc
	///
	float getSpeed();

	///
	///Metoda ustawia predkosc
	///
	///@param _speed - preskosc 
	///
	void setSpeed(float _speed);

//private:
protected:			//dla potomkow bedzie publiczne, dla swiata private
	float m_speed;	//predkosc

};
#endif //CVEHICLE_H_KD
