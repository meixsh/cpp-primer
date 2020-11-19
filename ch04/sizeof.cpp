#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string s = "hello";
	vector<int> va(100, 1000);
	vector<int> vb = {1, 2, 3, 4};
	cout << "va.size() " << va.size() << endl;
	cout << sizeof(s) << endl;
	cout << sizeof(va) << endl;
	cout << sizeof(vb) << endl;
	
	int a= 1;
	cout << a << endl;

	int b = sizeof(a = 100);
	cout << b << endl;
	cout << a << endl;











	return 0;
}
