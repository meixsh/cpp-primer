#include <iostream>
#include <string>

using namespace std;

int sum(initializer_list<int> ls);

int main()
{
	int res = sum({1, 2, 3});
	cout << res << endl;
	return 0;
}

int sum(initializer_list<int> ls)
{
	int sum = 0;
	for (auto e: ls)
		sum += e;

	return sum;
}
