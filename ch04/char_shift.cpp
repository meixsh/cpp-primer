#include <iostream>
using namespace std;

int main()
{
	char q = 0x71;
	auto res = ~q << 6;
	cout << typeid(res).name() << endl;
	cout << res << endl;



	return 0;
}
