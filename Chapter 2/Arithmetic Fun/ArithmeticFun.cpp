/*
    Arithmetic operators
    + addition operator
    - subtraction operator
    * multiplication operator;
    / division operator
    % modulus operaotr
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    int result = 10;

    result += 15; //Adds 15 to the result

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;
    cout << "quotient = " << quotient << endl;
    cout << "remainder = " << remainder << endl;
    cout << "Result = " << result << endl;

    return 0;
}
