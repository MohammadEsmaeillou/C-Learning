#include <string>
#ifndef DOG_H
#define DOG_H
using namespace std;

class Dog
{

	public:
		Dog(string breed);
		string getBreed() const;
		void setBreed(string breed);
	private:
		string breed;
};

#endif

