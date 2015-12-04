#include "BankAcoount.h"


int main() {
	BankAccount soso("ben laden");
	BankAccount koko("hosni mubark", 1000000);
	soso.show();
	koko.show();

	koko.deposit(-53456);
	koko.show();
	koko.deposit(50054.2635);
	koko.show();

	koko.withdraw(-2106.5);
	koko.show();
	koko.withdraw(9999999999999999);
	koko.show();
	koko.withdraw(1000000);
	koko.show();
}