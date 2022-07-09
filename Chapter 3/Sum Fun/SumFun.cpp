#include <iostream>
using namespace std;

int main()
{
    int input;
    int sum = 0;
    cout << "Please enter a non-negitive integer to continue, ";
    cout << "or negitive if you want to quit" << endl;

    cin >> input;

    while (input >= 0) {
        sum += input;
        cout << "Please enter a non-negitive integer to continue, ";
        cout << "or negitive if you want to quit" << endl;

        cin >> input;
    }

    cout << "Your Sum was : " << sum << endl;
    return 0;
}
