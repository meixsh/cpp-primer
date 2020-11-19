#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec = {1, 2, 3};
	for (auto e: ivec)
		e += 1;
	for (auto e: ivec)
		cout << e << endl;

	cout << string(20, '-') << endl;

	vector<string> svec = {"hello", "world"};
	for (auto e: svec)
		e[0] = 'B';
	for (auto e: svec)
		cout << e << endl;	

	return 0;
}
