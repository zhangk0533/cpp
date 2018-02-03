#include "Coordinate.h"

Coordinate::Coordinate(int x,int y)
{
	m_iX = x;
	m_iY = y;
	//cout << "Coordinate" << endl;
}

Coordinate::~Coordinate()
{
	
}

int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}

void Coordinate::setX(int x)
{
	this->m_iX = x;
}

void Coordinate::setY(int y)
{
	this->m_iY = y;
}

ostream &operator<<(ostream &out,Coordinate &coor)
{
	out << "(" << coor.getX() << "," << coor.getY() << ")" << endl;
	return out;
}