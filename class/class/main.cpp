#include <iostream>
#include <string>
#include"BankAccount.h"
using namespace std;
int main()
{
	string accnum;
	string accname;
	float accbalance;
	float deposit;
	string dedis;
	BankAccount anis;
	cout << "the default num : " << anis.getaccnum() << endl;
	cout << "the default holder's name : " << anis.getaccho() << endl;
	cout << "the default balanc : " << anis.getbal() << endl;
	cout << "\nenter accnum : ";
	cin >> accnum;
	anis.setaccnum(accnum);
	cout << "\nenter accname : ";
	cin >> accname;
	anis.setaccho(accname);
	cout << "\nenter accbalance : ";
	cin >> accbalance;
	anis.setbal(accbalance);
	cout << "\nenter accdeposit : ";
	cin >> deposit;
	anis.setdeposit(deposit);
	cout << "the accholder name is : "<<anis.getaccho() <<endl;
	cout << "the accnum is : " << anis.getaccnum() << endl;
	cout << "the accbalanc is : " << anis.getbal() << endl;

	return 0;
}