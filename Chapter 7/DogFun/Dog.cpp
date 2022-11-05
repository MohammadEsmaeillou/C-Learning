#include "Dog.h"
#include <stdexcept>

Dog::Dog(string breed)
{
	setBreed(breed);
}

string Dog::getBreed() const
{
	return breed;
}

void Dog::setBreed(string breed)
{
	if (breed != "Poodle" && breed != "poodle")
	{
		this->breed = breed;
	}
	else
	{
		throw runtime_error("Poodle? That's not a real dog!");
	}
}
