#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    while (count < 10)
    {
        cout << count << endl;
        count++;
    }

    cout << endl << endl;

    //do-while
    int count2 = 0;
    do
    {
        cout << count2 << endl;
        count2++;
    }while (count2 < 10) ;

    cout<<endl<<endl;

    //for-loop
    for(int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    int input;
    cout << "Please enter a non-negtive integer" << endl;
    cout << "or negitive if you want to quit" << endl;

    cin >> input;
    while (input >= 0)
    {
        cout << input << endl;
        cout << "Please enter a non-negtive integer  to continue or negitive if you want to quit" << endl;
        cout << "or negitive if you want to quit" << endl;

    cin >> input;
    }
    return 0;
}
