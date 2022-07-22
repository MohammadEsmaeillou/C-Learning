#include<iostream>
#include<cmath>
using namespace std;

int factorial (int num);

int main()
{
    int input = 6;
    int num = factorial(input);
    cout << input << " factorial is " << num << endl;

    return 0;
}

int factorial (int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    return num;
}
