#ifndef PIZZA_H
#define PIZZA_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Pizza
{
	public:
		Pizza(string name, int cost, int diameter);
		void addTopping(string topping);
		int getDiameter() const;
		string getName() const;
		int getCost() const;
		void printToppings() const;

	private:
		string name;
		int cost;
		int diameter;
		vector<string> toppings = {"Cheese"};
};

#endif