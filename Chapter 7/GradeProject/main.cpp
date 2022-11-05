#include <iostream>
#include <string>
#include<stdexcept>
using namespace std;

void letterGrade(int grade);


int main()
{
	int grade;
	cout << "Please enter in your percentage Grade" << endl;
	cin >> grade;
	letterGrade(grade);
}

void letterGrade(int grade)
{
	try
	{
		if (grade < 0 || grade > 100)
		{
			throw out_of_range("Your Percent Must Be Within 0 and 100 Inclusive");
		}
		else if (grade <= 59)
		{
			cout << "Your Grade is : F" << endl;
		}
		else if (grade <= 69)
		{
			cout << "Your Grade is : D" << endl;
		} 
		else if (grade <= 79)
		{
			cout << "Your Grade is : C" << endl;
		}
		else if (grade <= 89)
		{
			cout << "Your Grade is : B" << endl;
		}
		else
		{
			cout << "Your Grade is : A" << endl;
		}
			
	}
	catch (const out_of_range& err)
	{
		cout << err.what() << endl;
	}
}