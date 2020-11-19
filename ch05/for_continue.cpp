#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; i++, cout << "end" << endl)
	{
		if (i >= 0)
			continue;
		cout << "after continue." << endl;
	}

	return 0;
}
