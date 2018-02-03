#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(int x,int y,int r)
{
	cout << "Circle" << endl;
	m_pCenter = new Coordinate(x,y);
	m_iR = r;
}

Circle::Circle(const Circle &c)
{
	cout << "Circle(const Circle &c)" << endl;
	m_pCenter = new Coordinate(c.m_pCenter->m_iX,c.m_pCenter->m_iY);
	m_iR = c.m_iR;
}

Circle::~Circle()
{
	cout << "~Circle" << endl;
	delete m_pCenter;
	m_pCenter = nullptr;
}

void Circle::printInfo()
{
	cout << m_pCenter->m_iX << "-" << m_pCenter->m_iY<< "-" << m_iR << endl;
}