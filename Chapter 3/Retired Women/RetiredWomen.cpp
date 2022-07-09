#include <iostream>
using namespace std;

int main ()
{
    //prompt user for age and vendor
    //age is int and gender is character
    // get of f or F and are 60 or over
    // You qualify for the discount
    //you do not qualify for the discount

    int age;
    char gender;
    bool qualify = false;

    cout << "Please Enter Your Age" << endl;
    cin >> age;
    cout << "Please Enter Your Gender As M or F" << endl;
    cin >> gender;

    if (age >= 60)
    {
        switch(gender)
        {
        case'F':
        case'f':
            cout << "You qualify for the discount" << endl;
            break;
        default:
            cout << "You do not qualify for the discount" << endl;
        }
    }
    else
    {
        cout << "You do not qualify for the discount" << endl;
    }

    return 0;
}
