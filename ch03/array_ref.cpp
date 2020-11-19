#include <iostream>
using namespace std;

int main()
{
	int a[2][2] = {{1, 2}, {3, 4}};
	for (int (&row)[2]: a)
	{
		for (int &col: row)
			cout << col << " ";
		cout << endl;
	}

	return 0;
}
