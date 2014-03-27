#ifndef CCIECZ_H_KD
#define CCIECZ_H_KD

///
///Klasa reprezentuj¹ca ciecz
///
class CCiecz
{
public:
	///
	///Konstruktor
	///
	CCiecz(void);

	///
	///Konstruktor z parametrem temperatury
	///
	///@param _temp - temperatura danej cieczy
	///
	CCiecz(float _temp);

	///
	///Destruktor
	///
	~CCiecz(void);

	///
	///Metoda pobieraj¹ca temperaturê cieczy
	///
	float GetTemp();

private:
	const float m_temp;
};

#endif //CCIECZ_H_KD