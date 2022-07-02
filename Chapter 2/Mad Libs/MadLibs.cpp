#include <iostream>
#include <string>
using namespace std;

int main()
{
    string adjective1, girlsName, adjective2, occupation1, placeName, clothing, hobby, adjective3, occupation2, boysName, mansName;

    cout << "Hello, this is a MadLib Game" << endl;
    cout << endl;

    cout << "Please enter an Adjective" << endl;
    getline(cin, adjective1);

    cout << "Please enter a Girls Name" << endl;
    getline(cin, girlsName);

    cout << "Please enter an Adjective" << endl;
    getline(cin, adjective2);

    cout << "Please enter a Occupation" << endl;
    getline (cin, occupation1);

    cout << "Please enter a Place" << endl;
    getline(cin, placeName);

    cout << "Please enter a Clothing type" << endl;
    getline (cin, clothing);

    cout << "Please enter a Hobby" << endl;
    getline (cin, hobby);

    cout << "Please enter an adjective" << endl;
    getline (cin, adjective3);

    cout << "please enter an occupation" << endl;
    getline(cin, occupation2);

    cout << "Please enter a Boys Name" << endl;
    getline(cin, boysName);

    cout << "Please enter a Mans Name" << endl;
    getline(cin, mansName);

    cout<<endl;

    cout << " Here is the following story " << endl;

    cout << endl;

    cout << "There once was a " << adjective1 << " girl named "
    << girlsName << " who was a " << adjective2 << " " << occupation1
    << " in the Kindgom of " << placeName << ". She loved to wear "
    << clothing << " and " << hobby << ". She wanted to marry the "
    << adjective3 << " " << occupation2 << " named " << boysName
    << " but her father, King " << mansName << " forbid her from seeing him." << endl;

    return 0;
}
