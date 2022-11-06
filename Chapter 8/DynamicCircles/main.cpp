#include"Circle.h"
#include <iostream>
using namespace std;

void print(Circle temp);

int main()
{
	int circleCount = 0;
	int loopCount = 0;
	int radius = 0;

	cout << "How many Circles Would You Like" << endl;
	cin >> circleCount;

	int arraySize = circleCount - 1;
	Circle** myArray = new Circle*[arraySize];
	
	while (loopCount <= arraySize)
	{
		cout << "Radiuis of Circle: " << loopCount+1 << endl;
		cin >> radius;
		myArray[loopCount] = new Circle(radius);
		loopCount++;
	}

	cout << endl;

	for (int i = 0; i <= arraySize; i++)
	{
		cout << "Circle: " << i + 1 << endl;
		cout << "\tRadius: " << myArray[i]->getRadius() << endl
			<< "\tCircumference: " << myArray[i]->circumference() << endl
			<< "\tArea: " << myArray[i]->area() << endl << endl;
	}

	for (int i = 0; i <= arraySize; i++)
	{
		delete myArray[i];
		myArray[i] = nullptr;
	}

	return 0;
}

