#include<iostream>
using namespace std;

int main()
{
    int myArray [10];
    for (int i = 0; i < 10; i++)
    {
        myArray[i] = i+1;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << myArray[i] << endl;
    }
    return 0;
}
