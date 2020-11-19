#include <iostream>
using namespace std;

class A
{
	public:
		int m1;
		int m2;
		int m3;
		A(): m3(3), m1(1) { cout << "A::A()" << endl; }
		
};

int main()
{
	A a;
	cout << a.m1 << endl;
	cout << a.m2 << endl;
	cout << a.m3 << endl;

}
