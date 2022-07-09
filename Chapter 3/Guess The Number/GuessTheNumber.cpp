#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int guessCount = 0;
    int userNum;

    srand(time(nullptr));

    int num = rand() % 100 + 1;

    cout << "Welcome to the guessing game" << endl;

    cout <<"Please enter a number from 1 --> 100" << endl;
    cin >> userNum;

    while (userNum != num)
    {
        if (userNum > 100 || userNum < 0)
        {
            guessCount++;
            cout << "You have wasted a guess" << endl;
            cout << "Please make another guess" << endl;
            cin >> userNum;
        }
        else if (userNum > num)
        {
            cout << "Your Guess was too high" << endl;
            guessCount++;
            cout << "Please make another guess" << endl;
            cin >> userNum;
        }
        else if (userNum < num)
        {
            cout << "Your Guess was too low" << endl;
            guessCount++;
            cout << "Please make another guess" << endl;
            cin >> userNum;
        }
    }

    guessCount++;
    cout<<endl;
    cout<<"You have correctly guessed the number!" << endl;
    cout<<endl;
    cout << "Thanks for playing" << endl;
    cout << "It took you " << guessCount << " guesses to get correct answer" << endl;

    return 0;
}
