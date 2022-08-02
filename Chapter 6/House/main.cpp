#include <string>
#include <iostream>
#include "House.h"
using namespace std;

int main()
{
    House myHouse;
    House yourHouse;

    myHouse.printHouseData();
    yourHouse.printHouseData();

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("Purple");
    myHouse.printHouseData();

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("Green");
    yourHouse.printHouseData();

    House newHouse (2,3, "Neon Green");
    newHouse.printHouseData();

    return 0;
}

