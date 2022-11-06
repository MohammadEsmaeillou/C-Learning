#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	const int ARRAY_SIZE = 3;
	Rectangle* array[ARRAY_SIZE];

	Rectangle* rectOnePtr = new Rectangle(10, 20);
	Rectangle* rectTwoPtr = new Rectangle();
	Rectangle* rectThreePtr = new Rectangle(5, 5);

	array[0] = rectOnePtr;
	array[1] = rectTwoPtr;
	array[2] = rectThreePtr; 

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Rectangle count: " << i+1 << endl;
		cout << "\tArea is : " << array[i]->area() << endl;
		cout << "\tPerimeter is : " << array[i]->perimeter() << endl;
	}

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		delete array[i];
		array[i] = nullptr;
	}
	return 0;
}