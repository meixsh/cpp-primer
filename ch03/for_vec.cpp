#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 4};

	for (int e: vec)
	{
		cout << e << " ";
	}

	cout << endl;
	cout << "---------------" << endl;
	for (auto &e: vec)
	{
		cout << e << " ";
		cout << typeid(e).name() << endl;
		break;
	}

	cout << "-----------------" << endl;

	int a[3][4] = {};
	auto p = a;
	cout << typeid(p).name() << endl;

	return 0;
}
