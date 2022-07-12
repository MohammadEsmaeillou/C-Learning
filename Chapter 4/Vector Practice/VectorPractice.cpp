#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> names;

    names.push_back("Adrian");
    names.push_back("Darrel");
    names.push_back("nick");
    names.push_back("aaron");
    names.push_back("jasmine");
    names.insert(names.begin() + 2,"John Baugh");
    names.pop_back();

    for(string name : names)
    {
        cout << name << endl;
    }

    return 0;
}
