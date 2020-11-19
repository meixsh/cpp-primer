#include <iostream>
#include "find_char.h"
using namespace std;

int main()
{
	bool fst = true;
	string::size_type first = 0;
	string::size_type occurs = 0;
	string temp;
	string::size_type pos = 0;
	string::size_type pre = 0;
	char c = 'o';
	while (cin >> temp)
	{
		pos = find_char(temp, c, occurs);
		if (fst &&  pos != temp.size())
		{
			first = pos + pre;
			fst = false;
			cout << temp << endl;
		}
		pre += temp.size();
	}

	cout << "first position: " << first << endl;
	cout << "occurs times: " << occurs << endl;

	return 0;
}

