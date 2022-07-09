#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int temp;

    srand(time(nullptr));

    cout << "This Program will roll a dice 10 times" << endl << endl;

    for (int i = 0; i <10; i++)
    {
        temp = rand() % 6 + 1;
        cout << "Dice Roll Number " << (i + 1)<< " Is : " << temp << endl;
    }
    return 0;
}
