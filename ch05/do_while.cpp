#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> ivec = {1, 2, 3};
	int i = 0;
	int a;
	do {
		a = ivec[i++];
		cout << a << endl;

	} while (a != 3);

	if (int b = a) 
	{
		b++;
	}
	else 
	{
		b--;
	}

	return 0;
}
