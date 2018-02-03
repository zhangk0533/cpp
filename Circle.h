#include "Coordinate.h"

class Circle
{
public:
	Circle(int x,int y,int r);
	Circle(const Circle &c);
	~Circle();
	void printInfo();
private:
	int m_iR;
	Coordinate *m_pCenter;
};