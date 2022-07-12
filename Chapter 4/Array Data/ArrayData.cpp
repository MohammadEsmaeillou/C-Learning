#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5> input{};
    int counter = 0;
    while(counter < 5)
    {
        cout << "Please Enter an Integer" << endl;
        cin >> input[counter];
        counter++;
    }
    cout << "Now here are double the amounts:" << endl;
    for(int i = 0; i < input.size(); i++)
    {
        cout << (input[i]*2) << endl;
    }
    return 0;
}
