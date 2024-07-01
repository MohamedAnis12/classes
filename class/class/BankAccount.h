#include <string>
#pragma once
using namespace std;
class BankAccount
{
private:
	string accnum;
	string accname;
	float accbalance;
	float deposit;
	string dedis;
public:
	BankAccount();
	~BankAccount();
	void setaccnum(string n);
	string getaccnum();
	void setaccho(string name);
	string getaccho();
	void setbal(float p);
	float getbal();
	void setdeposit(float d);
	float getdeposit();
	void setdeposit(float d,string ds);
};


