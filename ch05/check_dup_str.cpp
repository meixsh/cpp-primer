#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> text;
	string pre_word;
	string word;
	while (cin >> word && word != pre_word)
	{
		pre_word = word;
	}

	if (cin)
	{
		cout << word << endl;
	}
	else
	{
		cout << "no duplicated string sequence." << endl;
	}

	return 0;
}
