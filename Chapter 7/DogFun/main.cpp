#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

int main()
{
	try
	{
		Dog one("Golden Retriver");
		Dog two("Lab");
		//Dog three("Poodle");
		Dog four("Germen Shepard");

		cout << one.getBreed() << endl;
		cout << two.getBreed() << endl;
		//cout << three.getBreed() << endl;
		cout << four.getBreed() << endl;
	}
	catch (const runtime_error& err)
	{
		cout << err.what() << endl;
	}

	return 0;
}