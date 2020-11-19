#include <iostream>
#include <string>
#include <vector>
using namespace std;

class A
{
	public:
		int a, b;
		A(int a, int b): a(a), b(b) { cout << "A::A()" << endl; }
		void f() { cout << "A::f() a = " << a << " b = " << b << endl; }

};

int main()
{
	A a(1.5, 2.0);
	a.f();
//	A b{3.5, 4.0};
//	b.f();
//	A c = {5, 6};
//	c.f();
	
	const string hr(20, '-');
	cout << hr << endl;

	vector<int> ivec;
	ivec = {1, 2, 3};
	for (auto e: ivec)
		cout << e << " ";
	cout << endl;
	
	cout << hr << endl;

	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100)
			scores[grade / 10]++;
	}

	for (auto e: scores)
		cout << e << " ";

	cout << endl;

	return 0;
}
