#include<iostream>
using namespace std;

int main()
{
    char grade;

    cout << "Please enter a letter grade" << endl;
    cin >> grade;

    switch (grade)
    {

    case 'A':
    case'a':
        cout << "Great job!" << endl;
        break;
    case 'B':
    case 'b':
        cout << "Good Job" << endl;
        break;
    case 'C':
    case'c':
        cout << "You can do better!" << endl;
        break;
    case 'D' :
    case 'd':
        cout << "You are close to failing!" << endl;
        break;
    case 'F' :
    case 'f':
        cout << "You are failing the course!" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
    }
    return 0;
}
