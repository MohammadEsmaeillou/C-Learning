#include "Circle.h"
#include<cmath>

const double pi = 2 * acos(0.0);

Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double radius)
{
	setRadius(radius);
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

double Circle::circumference() const
{
	return 2*pi*radius;
}

double Circle::area() const
{
	
	return pi*(pow(radius,2));
}
