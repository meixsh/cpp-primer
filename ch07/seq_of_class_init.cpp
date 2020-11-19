#include <iostream>
#include <string>

using namespace std;

class A
{
	public:
		A(int i): i(i) { cout << "A::A(int)" << this->i << endl; }
		int i;
};

class B
{
	public:
		B(int i): i(i) { cout << "B::B(int)" << this->i << endl; }
		int i;
};

class C
{
	public:
		C(): b(2), a(1) { cout << "C::C()" << endl; }
		A a;
		B b;
};

int main()
{
	C c;
	return 0;
}
