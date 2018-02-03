#include "Circle.h"
#include <stdlib.h>

int main_Circle(void)
{
	Circle c1(20,30,10);
	c1.printInfo();
	Circle c2(c1);
	c2.printInfo();


	system("pause");
	return 0;
}