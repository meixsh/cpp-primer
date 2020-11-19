#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> cnt(10, 1);
	auto a = cnt.size();
	cout << typeid(a).name() << endl;

	return 0;
}
