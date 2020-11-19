#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> ivec = { 1, 2, 3, 4, 5 };
	vector<int>::const_iterator it = ivec.begin();
	while (it != ivec.end())
		cout << ++(*it++) << " ";
	cout << endl;

	return 0;
}
