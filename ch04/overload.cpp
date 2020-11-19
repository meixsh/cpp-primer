#include <iostream>
using namespace std;

void melvin()
{
	cout << "f(void)" << endl;
}

void melvin(int i)
{
	cout << "f(int)" << endl;
}

int main()
{
	int a = 0;
	melvin();
	melvin(a);

	return 0;
}
