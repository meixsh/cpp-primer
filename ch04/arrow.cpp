#include <iostream>
#include <string>
using namespace std;

class A
{
	public:
		int a[3];
		A(): a{1, 2, 3}	 {}


};

int main()
{
	A *obj = new A;
	cout << obj->a[0] << endl;
	obj->a[0] = 100;
	cout << obj->a[0] << endl;
	A b;
	cout << b.a[0] << endl;

	return 0;
}
