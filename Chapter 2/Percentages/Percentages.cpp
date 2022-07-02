#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    string location;
    int intialScore;

    cout << "Please enter your full name" << endl;
    getline (cin, fullName);

    cout << "Please enter your location in following format city, state, country" << endl;
    getline(cin, location);

    cout<< "Please enter your intial number" << endl;
    cin >> intialScore;

    cin.get();

    intialScore +=5;

    cout << "Your Name is : " << fullName << endl;
    cout << "Your Location is : " << location << endl;
    cout << "Your Final Score is : " << intialScore << endl;

    return 0;
}
