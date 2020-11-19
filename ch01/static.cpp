#include <iostream>
using namespace std;

class A
{
	public:
		static const int a = 10;
		A() {}
		void f() {cout << "A::f() " << a << endl; };
};

int main()
{
	A b;
	b.f();

	return 0;
}
