#ifndef CENEMY_H_KD
#define CENEMY_H_KD

///
///Klasa reprezentuj¹ca przeciwnika
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
	///Metoda zwraca pozycjê X
	///
	int getX();

	///
	///Metoda zwraca pozycjê Y
	///
	int getY();

	///
	///Metoda przesuwa przecwnika o wektor
	///
	///@param int _x - przesuniêcie na osi X
	///@param int _y - przesuniêcie na osi Y
	///
	void move(int _x, int _y);

	///
	///Metoda dziêki której przeciwnik atakuje
	///
	void attack();

	///
	///Metoda dziêki której przeciwnik przestaje atakowaæ
	///
	void stopAttack();

	///
	///Metoda zwraca ¿ycie
	///
	int getHealth();

	///
	///Metoda zwraca si³e
	///
	int getStrength();

protected:
	int m_positionX;		//Pozycja X
	int m_positionY;		//Pozycja Y
	int m_health;			//¯ycie
	int m_strength;			//Si³a
	bool m_attack;
};

#endif //CENEMY_H_KD
