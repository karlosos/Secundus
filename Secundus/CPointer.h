#ifndef H_PRALKA
#define H_PRALKA
class CPointer
{
public:
	CPointer(void);
	~CPointer(void);

	const float getWaga() const;
	void setWaga(float waga);
private:
	float m_waga;
};

#endif //H_PRALKA