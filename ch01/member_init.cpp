#include <iostream>
using namespace std;

class A
{
	public:
		A(): i(10) {}
		//int i(5);   // error
//		int i = 5;     ok
//		int i = {5};   ok
		int i{5};	 //  ok
};

int main()
{
	int j(3); // ok
	return 0;
}
