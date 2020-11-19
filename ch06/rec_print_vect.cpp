#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>::const_iterator beg, vector<int>::const_iterator end);

int main()
{
	vector<int> ivec = {1, 2, 3, 4, 5};
	print(ivec.cbegin(), ivec.cend());

	return 0;
}

void print(vector<int>::const_iterator beg, vector<int>::const_iterator end)
{
#ifndef NDEBUG
	cout << "vector size: " << end - beg << endl;
#endif

	if (beg == end)
	{
		cout << "over" << endl;
		return;
	}

	cout << *beg << " ";
	print(++beg, end);

}
