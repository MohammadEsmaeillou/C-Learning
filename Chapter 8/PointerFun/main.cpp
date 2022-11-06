#include <iostream>
using namespace std;

int main()
{
	int myLovelyInt = 150;
	int* somePtr = &myLovelyInt;

	double myDouble = 3.14;
	double* doublePtr = &myDouble;

	cout << "myLovelyInt is originally : " << myLovelyInt << endl;
	cout << "pointer holds value: " << somePtr << endl;
	cout << "pointer dereferenced: " << *somePtr << endl;

	*somePtr = 200;

	cout << "myLoveInt is now: " << myLovelyInt << endl;
	cout << endl;
	cout << "myDouble pointer holds value: " << doublePtr << endl;
	cout << "myDouble pointer dereferenced: " << *doublePtr << endl;

	return 0;
}