#include"Circle.h"
#include <iostream>
using namespace std;

void print(Circle temp);

int main()
{
	Circle one;
	Circle two(5.0);
	Circle three(10.0);
	print(one);
	print(two);
	print(three);

	return 0;
}

void print(Circle temp)
{
	cout << "Circle with radius " << temp.getRadius() << endl
		<< "Circumference: " << temp.circumference() << endl
		<< "Area: " << temp.area() << endl << endl;
}