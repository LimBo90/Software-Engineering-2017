#include "Person.h"
#include <iostream>
using namespace std;


Person::Person(const string & ln, const char * fn)
{
	if (strlen(fn) > LIMIT) {
		strncpy_s(fname, fn, LIMIT - 1);
	}
	else {
		strcpy_s(fname, fn);
	}

	lname = ln;
}

void Person::Show() const {
	cout << fname << " " << lname << endl;
}

void Person::FormalShow() const {
	cout << lname << ", " << fname << endl;
}

