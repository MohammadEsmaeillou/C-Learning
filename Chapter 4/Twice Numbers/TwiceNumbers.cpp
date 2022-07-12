#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 10> myIntArray {};

    for (int i = 0; i < myIntArray.size(); i++)
    {
        myIntArray[i] = i*2;
    }

    for (int numbers : myIntArray)
    {
        cout << numbers << endl;
    }

    return 0;
}
