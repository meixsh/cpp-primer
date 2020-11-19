#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main()
{
	int a, b;
	cout << "please input two numbers: " << endl;
	while (cin >> a >> b)
	{
		try {
			if (0 == b)
				throw runtime_error("divisor is zero.");
			cout << a / b << endl;
		} catch (runtime_error err)
		{
			cout << err.what() << "\nTry Aagin? Enter y or n" << endl;
			char c;
			cin >> c;
			if (c != 'y')
				break;
		}
		cout << "please input tow numbers: " << endl;
	}

	return 0;
}
