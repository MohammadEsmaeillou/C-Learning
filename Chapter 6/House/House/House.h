#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include <string>
using namespace std;

class House {
    public:

        House();

        ~House();

        House(int numStoried, int numWindows, string color);

        void setNumStories(int numStories);

        void setNumWindows(int numWindows);

        void setColor(string color);

        int getNumStories() const; //const means it can access data memebers but not change them

        int getNumWindows() const;

        string getColor() const;

        void printHouseData() const;

    private:
        int numStories;
        int numWindows;
        string color;
};

#endif