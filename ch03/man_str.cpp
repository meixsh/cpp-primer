#include <iostream>
#include <string>

using namespace std;

int main()
{
	char *p = "hello";
	*p = 'b';
	for (const char *cp = p; *cp; )
		cout << *cp++;
	cout << endl;

	return 0;
}
