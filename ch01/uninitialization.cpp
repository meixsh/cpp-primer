#include <iostream>
using namespace std;

class A
{
	public:
		A():i(0) { cout << "A() i " << i << endl; }
		int i;
};

int main()
{
	A a;

	return 0;
}
