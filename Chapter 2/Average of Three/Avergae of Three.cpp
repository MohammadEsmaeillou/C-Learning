#include <iostream>
using namespace std;

int main ()
{
    double num1, num2, num3, mean;

    cout << "Please enter the first number" << endl;
    cin >> num1;

    cout << "Please enter the second number" << endl;
    cin >> num2;

    cout << "Please enter the third number" << endl;
    cin >> num3;

    mean = (num1 + num2 + num3)/3;

    cout << "The mean is : " << mean << endl;

    return 0;
}
