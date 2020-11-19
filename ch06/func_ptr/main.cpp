#include <iostream>
#include <vector>
#include <cassert>

#include "func_ptr.h"

using std::cout;
using std::cin;
using std::endl;	
using std::vector;

int main()
{
	vector<fun_t> funcVec = {add, sub, multip, divide};
	int x, y;
	while (cin >> x >> y)
	{
		assert(x >= y);
		for (auto &func: funcVec)
		{
			cout << func(x, y) << endl;
		}
	}

	return 0;
}
