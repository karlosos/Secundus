#ifndef CENEMY_H_KD
#define CENEMY_H_KD

///
///Klasa reprezentuj�ca przeciwnika
///
class CEnemy
{
public:
	///
	///Konstruktor
	///
	CEnemy();

	///
	///Destruktor
	///
	virtual ~CEnemy();

	///
	///Metoda zwraca pozycj� X
	///
	int getX();

	///
	///Metoda zwraca pozycj� Y
	///
	int getY();

	///
	///Metoda przesuwa przecwnika o wektor
	///
	///@param int _x - przesuni�cie na osi X
	///@param int _y - przesuni�cie na osi Y
	///
	void move(int _x, int _y);

	///
	///Metoda dzi�ki kt�rej przeciwnik atakuje
	///
	void attack();

	///
	///Metoda dzi�ki kt�rej przeciwnik przestaje atakowa�
	///
	void stopAttack();

	///
	///Metoda zwraca �ycie
	///
	int getHealth();

	///
	///Metoda zwraca si�e
	///
	int getStrength();

protected:
	int m_positionX;		//Pozycja X
	int m_positionY;		//Pozycja Y
	int m_health;			//�ycie
	int m_strength;			//Si�a
	bool m_attack;
};

#endif //CENEMY_H_KD
