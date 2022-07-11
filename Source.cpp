#include <iostream>
#include "Class.h"
using namespace std;
void main() {
	int n;
	char *m = new char[10];
	Class* C = new Class;
	cin >> n >> *m;
	C->SetMark(n);
	C->SetName(m);
	cout << C->getMark() << endl;
	cout << C->getName() << endl;
	delete []m;
}