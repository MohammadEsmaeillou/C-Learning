#include<iostream>
#include "WarpDriveOverheating.h"
using namespace std;

void checkTemp(int temp);
void testWrapper(int test);

int main()
{
	for (int i = 10; i <= 90; i += 10)
	{
		testWrapper(i);
	}
	return 0;
}

void testWrapper(int test)
{
	try
	{
		cout << "Test @ " << test << " deg C " << endl;
		checkTemp(test);
	}
	catch (const WarpDriveOverheating& err)
	{
		cout << err.what() << endl;
	}
}

void checkTemp(int temp)
{
	if (temp > 80)
	{
		throw WarpDriveOverheating();
	}
	else
	{
		cout << "Temperture is within tolerance." << endl;
	}
}