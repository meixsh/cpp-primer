#include <iostream>
#include <string>
#include <vector>

using namespace std;

void f();

class A
{
	friend void f() { cout << "f()" << endl; }
	public:
		void g() { cout << "A::g() before" << endl; f(); cout << "A::g() after" << endl; }
		void h();
};

int main()
{
	A a;
	a.g();
	return 0;
}
