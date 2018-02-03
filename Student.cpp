#include "Student.h"
#include "Time.h"
#include <iostream>
using namespace std;

void Student::printTime(Time &t)
{
	cout << t.m_iYear << "-" << t.m_iMonth << "-" << t.m_iDay << endl;
}