#include <iostream>
#include "AngryCatException.h"
using namespace std;

void feedKitty(int numTreats);
int main()
{
	int numTreats = 0;
	cout << "How many treats do you want to feed kitty?" << endl;
	cin >> numTreats;

	try
	{
		feedKitty(numTreats);
	}
	catch (const AngryCatException& err)
	{
		cout << err.what() << endl;
	}
}

void feedKitty(int numTreats)
{
	if (numTreats < 3)
	{
		throw AngryCatException();
	}
	else if (numTreats < 5)
	{
		throw AngryCatException("Kitty is not that happy");
	}

	cout << "Kitty is happy with " << numTreats << " treats." << endl;
}