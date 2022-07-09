#include <iostream>
using namespace std;

int main()
{
    char package;
    int jams;
    int sum;

    cout << "Welcome to the Jam of the Month Club!" << endl;
    cout << endl;

    cout << "We have 3 packages at your disposal" << endl;

    cout <<endl;

    cout << "Package A" << endl;
    cout << "$8 a month" << endl;
    cout << "Includes 2 Jams Per Month" << endl;
    cout << "Each additional jam on top of the 2 is $5 each" << endl;

    cout << endl;

    cout << "Package B" << endl;
    cout << "$12 a month" << endl;
    cout << "Includes 4 Jams Per Month" << endl;
    cout << "Each additional jam on top of the 4 is $4 each" << endl;

    cout << endl;

    cout << "Package C" << endl;
    cout << "$15 a month" << endl;
    cout << "Includes 6 Jams Per Month" << endl;
    cout << "Each additional jam on top of the 6 is $3 each" << endl;

    cout << endl;

    cout << "What package would you like to enroll in?" << endl;
    cin >> package;

    cout << "How many jams would you like this month?" << endl;
    cin >> jams;

    cout << endl;

    if (package == 'A' || package == 'a')
    {
        sum = 8;
        if (jams > 2)
        {
            jams -= 2;
            sum += (jams * 5);
        }
        cout << "Your outstanding balance for this month is : $" << sum <<endl;
    }
    else if (package =='B' || package == 'b')
    {
        sum = 12;
        if(jams > 4)
        {
            jams -= 4;
            sum += (jams * 4);
        }
        cout << "Your outstanding balance for this month is : $" << sum <<endl;
    }
    else if (package == 'C' || package == 'c')
    {
        sum = 15;
        if (jams > 6)
        {
            jams -= 6;
            sum += (jams * 3);
        }
        cout << "Your outstanding balance for this month is : $" << sum <<endl;
    }
    else
    {
        cout << "Wrong Input was made!" << endl;
    }

    cout << endl;

    cout << "Thanks for choosing the Monthly Jam Club!" << endl;

    return 0;
}
