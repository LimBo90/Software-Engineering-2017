#ifndef BANKACCOUNT
#define BANKACCOUNT
#include <string>
using namespace std;

class BankAccount
{
private:
	string mOwnerName;
	string mId;
	double mBalance;
public:
	BankAccount(const string & ownerName, double balance = 0);
	const void show();
	void deposit(double amount);
	void withdraw(double amount);
};

#endif