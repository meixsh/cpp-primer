#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> ivec = {1, 2, 3, 4, 5};
	for (vector<int>::iterator beg = ivec.begin(), end = ivec.end(); beg != end; ++beg)
	{
		*beg *= *beg;	
	}

	for (int e: ivec)
	{
		cout << e << " ";
	}
	cout << endl;	

	return 0;
}
