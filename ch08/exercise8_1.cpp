#include <iostream>
#include <string>

using namespace std;

istream& cinAdvanced(istream&);
istream& func(istream&);

int main()
{
	//cinAdvanced(cin);
	istream& is = func(cin);
	cout << is.rdstate() << endl;

	return 0;
}

istream& cinAdvanced(istream &cin)
{
	string line;
	while (getline(cin, line))
	{
		cout << line;
	}

	cin.clear();
	return cin;
}

istream& func(istream &is)
{
	string buf;
	while (is >> buf)
		cout << buf << endl;
	is.clear();
	return is;
}
