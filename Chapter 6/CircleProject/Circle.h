#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
	public:
		Circle(double radius);
		Circle();
		double getRadius() const;
		void setRadius(double radius);
		double circumference() const;
		double area() const;

	private:
		double radius;
};

#endif

