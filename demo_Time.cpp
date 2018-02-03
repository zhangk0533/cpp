#include <stdlib.h>
#include <iostream>
#include "Time.h"

using namespace std;

//void printTime(Time &t);

int main(void)
{
	Time t1(2017,12,4);
	//printTime(t1);
	Student stu;
	stu.printTime(t1);

	system("pause");
	return 0;
}

//void printTime(Time &t)
//{
//	cout << t.m_iYear << "-" << t.m_iMonth << "-" << t.m_iDay << endl;
//}