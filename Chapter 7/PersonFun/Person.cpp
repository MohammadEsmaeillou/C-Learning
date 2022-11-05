#include "Person.h"
#include <stdexcept>

Person::Person(string name)
{
	setName(name);
}

string Person::getName() const noexcept
{
	return name;
}

void Person::setName(string name)
{
	if (name != "John")
	{
		this->name = name;
	}
	else
	{
		throw runtime_error("John? that guy is too ugly for an object!");
	}
}
