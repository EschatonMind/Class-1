#pragma once
#include <iostream>
using namespace std;
class Class
{
	char *Name = new char[10];
	int *Mark = new int;
public:
	void SetMark(int &N) {
		*Mark = N;
	}
	void SetName(char a[]) {
		Name = a;
	}
	int getMark() {
		return *Mark;
	}
	char getName() {
		for (int i = 0; i < 10; i++) {
			return Name[i];
		}
	}
	//delete []Name;
};

