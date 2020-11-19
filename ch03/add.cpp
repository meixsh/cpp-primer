#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> ivec = {1, 2, 7, 3, 4};

	decltype(ivec.size()) i = 0;
	decltype(ivec.size()) j = ivec.size() - 1;
	while (i < j)
	{
		cout << ivec[i++] + ivec[j--] << endl;
	}
	if (i == j)
		cout << ivec[i] << endl;


	return 0;
}
