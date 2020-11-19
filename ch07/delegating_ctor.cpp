#include <iostream>
#include <string>

using namespace std;

class A
{
	public:
		int i, j;
		A(int i, int j): i(i), j(j) { cout << "A::A(int, int)" << endl; }
		A(): A(0, 0) { cout << "A::A()" << endl; };
		A(int i): A(i, 0) { cout << "A::A(int)" << endl; }

};

int main()
{
	A a;


	return 0;
}
