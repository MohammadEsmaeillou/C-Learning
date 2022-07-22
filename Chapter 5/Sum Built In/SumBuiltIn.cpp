#include<iostream>
#include<array>
using namespace std;

int sumArray(int input[], int size);

int main()
{
    int input[5] = {128,561,895,23,1004};
    int len = sizeof(input) / sizeof(input[0]);
    for(int num: input)
    {
         cout << num << endl;
     }
     cout << len << endl;
    int sum = sumArray(input, len);

    cout << "The sum is " << sum << endl;
    return 0;
}

int sumArray(int input[], int size)
{
    if (size > 1)
    {
        size--;
        cout << input[size] << endl;
        return (input[size] + sumArray(input, size));
    }
    size--;
    cout << input[size] << endl;
    return input[size];
}
