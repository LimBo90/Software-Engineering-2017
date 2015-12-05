#include <iostream>
#include"Person.h"
using namespace std;


int main() {
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one defaultargument
	Person three("Dimwiddy", "Sam"); // use #2, nodefaults
	Person four("Ahmed", "mal;kjfdllkjals;dkjfa;ljsfliawujeorija;sl,.dnfa;lskdjfl;kajdf;ajfl;d"); //first name >25 characters

	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;

	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;

	three.Show();
	cout << endl;
	three.FormalShow();
	cout << endl;


	four.Show();
	cout << endl;
	four.FormalShow();
	cout << endl;

} 