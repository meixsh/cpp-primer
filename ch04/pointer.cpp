#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a = 10;
	int *p = &a;
	cout << *p << endl;
	p = +p;
	cout << *p << endl;

	printf("%p\n", p);
	p = -p;
	printf("%p\n", p);

	return 0;
}
