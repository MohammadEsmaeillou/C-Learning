#include "BankAccount.h"
#include<string>
#include <iostream>
using namespace std;

BankAccount::BankAccount(string owner)
{
	this->owner = owner;
	balance = 0;
}

BankAccount::BankAccount(string owner, int balance)
{
	this->owner = owner;
	if (balance > 0)
	{
		this->balance = balance;
	}
	else
	{
		cout << "Invalid Input was Given!" << endl;
	}
}

void BankAccount::deposit(int amount)
{
	if (amount >= 0)
	{
		balance = amount + balance;
	}

	else
	{
		cout << "The amount to deposit has to be greater than 0" << endl;
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount > balance)
	{
		cout << "Withdrawing more than is avalible" << endl;
	}

	else if (amount < 0)
	{
		cout << "The amount to withdraw has to be greater than 0" << endl;
	}
	else 
	{
		balance = balance - amount;
	}
}

string BankAccount::getOwner() const
{
	return owner;
}

int BankAccount::getBalance() const
{
	return balance;
}