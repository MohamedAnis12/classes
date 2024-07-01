#include "BankAccount.h"
#include <string>
#include<iostream>
using namespace std;
BankAccount::BankAccount()
{
	accname = "Unknown";
	accnum = "NULL";
	accbalance = 0.0;
}
BankAccount::~BankAccount()
{
	cout << "the object is being destroyed.";
}
void BankAccount::setaccnum(string n)
{
	accnum = n;
}

string BankAccount::getaccnum()
{
	return accnum;
}

void BankAccount::setaccho(string name)
{
	accname = name;
}

string BankAccount::getaccho()
{
	return accname;
}

void BankAccount::setbal(float p)
{
	if (p >= 0)
		accbalance = p;
	else
		cout << "You can not enter negative num\n";
}

float BankAccount::getbal()
{
	return accbalance;
}

void BankAccount::setdeposit(float d)
{
	deposit = d;
	accbalance += d;
}

float BankAccount::getdeposit()
{
	return deposit;
}

void BankAccount::setdeposit(float d, string ds)
{
	deposit = d;
	accbalance += d;
	dedis = ds;
}
