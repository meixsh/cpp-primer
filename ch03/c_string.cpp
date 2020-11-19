#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "hello world.";
	const char *chs = str.c_str();

	for (const char *p = chs; *p; )
	{
		cout << *p++;
	}
	cout << endl;

	str[0] = 'B';
	while (*chs)
		cout << *chs++;
	cout << endl;

	return 0;
}
