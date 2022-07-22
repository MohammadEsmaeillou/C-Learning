#include <iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum);
void threeTimesN(int input, int& output);

int main()
{
    int myNumber = 20;
    int output = 0;
    int input = 9;

    cout << "Before valueChanged1 call, myNumber is " << myNumber << endl;
    valueChanged1(myNumber);
     cout << "After valueChanged1 call, myNumber is " << myNumber << endl;

     cout << endl << endl;

     cout << "myNumber is currently: " << myNumber << endl;
     valueChanged2(myNumber);
     cout << "After valuechanged2 call, myNumber is " << myNumber << endl;

     cout << endl << endl;
     threeTimesN(input,output);
     cout << "Input times 3 is equal to " << output << endl;
    return 0;
}

void valueChanged1(int someNum)
{
    someNum = 100;
    cout << "Some num in valuechanged is " << someNum << endl;
}

void valueChanged2(int& someNum)
{
    someNum = 100;
    cout << "Inside valueChanged2 function, someNum is " << someNum << endl;
}

void threeTimesN (int input, int& output)
{
    output = input * 3;
}
