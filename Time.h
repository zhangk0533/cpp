#ifndef TIME_H
#define TIME_H

#include <iostream>
#include "Student.h"

class Time
{
	//friend void printTime(Time &t);
	friend void Student::printTime(Time &t);
public:
	Time(int year,int month,int day);
	~Time();

private:
	int m_iYear;
	int m_iMonth;
	int m_iDay;
};

#endif