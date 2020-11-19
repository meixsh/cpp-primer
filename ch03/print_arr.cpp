#include <iostream>
using namespace std;

using p_array = int (*)[4];
//typedef int (*p_array)[4];

int main()
{
	int a[3][4] = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}};
	p_array p = a;

	for (; p != &a[3]; p++)
	{
		for (int *q = *p; q != *p + 4; q++)
			cout << *q << " ";
		cout << endl;
	}

	return 0;
}
