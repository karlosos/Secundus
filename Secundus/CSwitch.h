#ifndef H_SWITCH
#define H_SWITCH

///
///Klasa reprezentuje w³¹cznik
///
class CSwitch
{
public:

	///
	///Konstruktor
	///
	CSwitch(void);
	
	///
	///Destruktor
	///
	~CSwitch(void);

	///
	///Metoda w³¹cza/wy³¹cza urz¹dzenie
	///
	///@param state - pole on/off
	///
	void Switch(bool state);

	///
	///Metoda zwraca stan w³¹cznika
	///
	bool GetState();

private:

	bool m_state;	//pole oznacza stan (on/off)
};

#endif //H_SWITCH