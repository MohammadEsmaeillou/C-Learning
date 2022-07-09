#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " is Even" << endl;
        }
        else
        {
            cout << i << " is Odd" << endl;
        }
    }

    return 0;
}
