#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> input;
    int temp;
    cout << "Please Enter a Non Negative Number" << endl;
    cin >> temp;
    while(temp >= 0)
    {
        input.push_back(temp);
        cout << "Please Enter a Non Negative Number" << endl;
        cin >> temp;
    }
    cout << endl << endl << "Now here are double the amounts" << endl;
    for(int num : input)
    {
        cout << (num*2) << endl;
    }
    return 0;
}
