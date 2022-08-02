#include "BankAccount.h"
#include<string>
#include<iostream>
using namespace std;

void balance(BankAccount temp);

int main()
{
	/* Test-Case #1
	* Expected Results
	* Intial Balance = 0
	* Withdraw of 100 = Error Message
	* Deposit of 100 = Balance (100)
	* Deposit of -100 = Error Message
	* Withdraw of -100 = Error Message
	* Withdraw of 100 = Balance (0)
	*/
	cout << "Test-Case 1" << endl;
	cout << "-----------" << endl;
	BankAccount jasmine("Jasmine");
	cout << "Intail Balance" << endl;
	balance(jasmine);
	cout << endl;
	jasmine.withdraw(100);
	jasmine.deposit(100);
	cout << "After deposit of 100" << endl;
	balance(jasmine);
	cout << endl;
	jasmine.deposit(-100);
	jasmine.withdraw(-100);
	jasmine.withdraw(1000);
	jasmine.withdraw(25);
	cout << "After withdraw of 25" << endl;
	balance(jasmine);
	cout << endl;
	jasmine.withdraw(75);
	cout << "After withdraw of 75" << endl;
	balance(jasmine);
	cout << endl;

	/* Test-Case #2
	* (same as #1 but testing 2nd constructor)
	*/
	cout << "Test-Case 2" << endl;
	cout << "-----------" << endl;
	BankAccount moe("Moe", 10000);
	cout << "Intail Balance" << endl;
	balance(moe);
	cout << endl;
	moe.withdraw(100000);
	moe.deposit(1000);
	cout << "After deposit of 1000" << endl;
	balance(moe);
	cout << endl;
	moe.deposit(-100);
	moe.withdraw(-100);
	//moe.withdraw(1000);
	moe.withdraw(25);
	cout << "After withdraw of 25" << endl;
	balance(moe);
	cout << endl;
	moe.withdraw(75);
	cout << "After withdraw of 75" << endl;
	balance(moe);
	cout << endl;
	return 0;
}

void balance(BankAccount temp)
{
	cout << temp.getOwner() << " current balance is "
		<< temp.getBalance() << endl;
}