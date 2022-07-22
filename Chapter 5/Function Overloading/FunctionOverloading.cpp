#include <iostream>
#include<string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num1);

int main()
{
    int resultNum = getResult(30, 20);
    string nameResult = getResult("John", "Baugh");

    cout << "result num is " << resultNum << endl;
    cout << "name result is " << nameResult << endl;

    resultNum = getResult(5);
    cout << "new result num is " << resultNum << endl;

    return 0;
}

int getResult(int num1, int num2)
{
    return num1 * num2;
}

int getResult(int num1)
{
    return num1 * num1 * num1;
}

string getResult(string str1, string str2)
{
    return str1 + " " + str2;
}
