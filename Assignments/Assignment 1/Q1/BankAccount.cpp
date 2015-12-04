#include "BankAcoount.h"
#include <iostream>
using namespace std;


BankAccount::BankAccount(const string & ownerName, double balance) {
	mOwnerName = ownerName;
	mBalance = balance;
}

const void BankAccount::show() {
	cout << "Account owner: " << mOwnerName << "\tBalance:" << mBalance << endl;
}

void BankAccount::deposit(double amount) {
	if (amount < 0) {
		cout << "You can't deposit a negative value." << endl;
	}
	else {
		mBalance += amount;
	}
}

void BankAccount::withdraw(double amount) {
	if (amount < 0) {
		cout << "You can't withdraw a negative value." << endl;
	}
	else if (amount > mBalance) {
		cout << "You don't have enough money." << endl;
	}
	else {
		mBalance -= amount;
	}
}

