#include "Pizza.h"

Pizza::Pizza(string name, int cost, int diameter)
{
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;
}

void Pizza::addTopping(string topping)
{
	toppings.push_back(topping);
}

int Pizza::getDiameter() const
{
	return diameter;
}

string Pizza::getName() const
{
	return name;
}

int Pizza::getCost() const
{
	return cost;
}

void Pizza::printToppings() const
{
	for (int i = 0; i < toppings.size(); i++)
	{
		cout << '\t' << toppings.at(i) << endl;;
	}
	cout << endl;
}
