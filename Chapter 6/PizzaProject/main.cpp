#include "Pizza.h"
#include<iostream>
#include<string>
using namespace std;

void print(Pizza temp);

int main()
{
	//Peperoni Pizza Intialization
	Pizza pep("Pepperoni Pizza", 16, 12);
	pep.addTopping("Pepperoni");

	//Combo Pizza Intialization
	Pizza combo("Combo Pizza", 24, 14);
	combo.addTopping("Pepperoni");
	combo.addTopping("Green Pepper");
	combo.addTopping("Saussage");
	combo.addTopping("Olives");
	combo.addTopping("Onions");
	combo.addTopping("Mushrooms");
	combo.addTopping("Tomato");

	//Cheese Pizza Intialization
	Pizza cheese("Cheese Pizza", 14, 12);

	//Printing out Data
	print(cheese);
	print(pep);
	print(combo);

	return 0;
}

void print(Pizza temp)
{
	cout << "Name : " << temp.getName() << endl
		<< "Diameter : " << temp.getDiameter() << endl
		<< "Cost : $" << temp.getCost() << endl
		<< "Toppings : " << endl;
	temp.printToppings();
}