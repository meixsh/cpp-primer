#include <iostream>
#include <string>
using namespace std;

class A
{
	public:
		int a, b;
		A(int a, int b): a(a), b(b) {}
};

void f(int *word)
{
	cout << "f(int*)" << endl;
}

void f(const int *word)
{
	cout << "f(const int*)" << endl;
}

int main()
{
	double a = 3.5;
	int i1 = a;
	int i2 = static_cast<int>(a);
	double *pd = &a;
	int *i3 = reinterpret_cast<int *>(pd);

	cout << i1 << endl;
	cout << i2 << endl;
	cout << *pd << endl;
	cout << *i3 << endl;

	cout << string(10, '-') << endl;
	const A o1(1,2);
	cout << o1.a << " " << o1.b << endl;
	A *po = const_cast<A *>(&o1);
	po->a = 100;
	po->b = 200;
	cout << po->a << " " << po->b << endl;
	cout << o1.a << " " << o1.b << endl;
	cout << po->a << " " << po->b << endl;
	
	cout << string(10, '-') << endl;
	const int *fp = &i1;
	f(const_cast<int *>(fp));
	f(const_cast<const int *>(fp));
	
	cout << string(10, '-') << endl;

	int b1 = 10;
	int *pb1 = &b1;
	void *pb2 = static_cast<void *>(pb1);

	return 0;
}

