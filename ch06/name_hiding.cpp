#include <iostream>
#include <string>
using namespace std;

int read();

int main()
{
	int read = 10;
	int res = ::read();
	cout << res << endl;
	return 0;
}

int read()
{
	return 1;
}
