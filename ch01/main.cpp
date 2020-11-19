#include <iostream>
#include "../include/Sales_item.h"
using namespace std;

int main()
{
	Sales_item item;
	while (cin >> item)
	{
		cout << "Get one" << endl;
		cout << item << endl;
	}

	return 0;
}


