#include <iostream>
using namespace std;

int main()
{
	int arrSize = 0;
	cout << "Please give an array size" << endl;
	cin >> arrSize; 

	int* myArray = new int[arrSize];

	for (int i = 0; i < arrSize; i++)
	{
		myArray[i] = i * 2;
	}

	for (int i = 0; i < arrSize; i++)
	{
		cout << myArray[i] << endl;
	}

	delete[] myArray;

	return 0;
}