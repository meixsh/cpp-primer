#include <iostream>
using namespace std;

int main()
{
	auto old_state = cin.rdstate();
	int a = 10;
	cout << typeid(old_state).name() << endl;
	cout << typeid(a).name() << endl;	

	return 0;
}
