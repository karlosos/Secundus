#ifndef H_SWITCH
#define H_SWITCH

///
///Klasa reprezentuje w��cznik
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
	///Metoda w��cza/wy��cza urz�dzenie
	///
	///@param state - pole on/off
	///
	void Switch(bool state);

	///
	///Metoda zwraca stan w��cznika
	///
	bool GetState();

private:

	bool m_state;	//pole oznacza stan (on/off)
};

#endif //H_SWITCH