#include <iostream>
using namespace std;

extern const int a;

void f()
{
	cout << "const.cpp: void f() a " << a << endl;
}
