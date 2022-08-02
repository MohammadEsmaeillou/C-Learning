#include "House.h"
using namespace std;

House::House()
{
    this->numStories = 1;
    this->numWindows = 4;
    this->color = "White";
}

House::~House()
{
    cout << "The " << color << " house with " << numStories << " stories "
        << " and " << numWindows << " windows is being destoryed!" << endl;
    cout << endl;
}

House::House(int numStories, int numWindows, string color)
{
    this->numStories = numStories;
    this->numWindows = numWindows;
    this->color = color;
}

void House :: setNumStories(int numStories)
{
    this->numStories = numStories;
}

void House :: setNumWindows(int numWindows)
{
    this->numWindows = numWindows;
}

void House :: setColor(string color)
{
    this->color = color;
}

int House :: getNumStories() const //const means it can access data memebers but not change them
{
    return numStories;
}

int House :: getNumWindows() const
{
    return numWindows;
}

string House :: getColor() const
{
    return color;
}

void House::printHouseData() const
{
    cout << "The house is " << color << " and has "
        << numStories << " stories and "
        << numWindows << " windows." << endl << endl;
}
