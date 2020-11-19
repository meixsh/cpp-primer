#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> grade_coll = {"F", "D", "C", "B", "A", "A++"};
	int score = 0;
	string level;
	while (cin >> score)
	{
		if (score < 60)
		{
			level = grade_coll[0];
		}
		else
		{
			int idx = (score - 50) / 10;
			level = grade_coll[idx];
			if (score != 100)
			{
				if (score % 10 >= 3)
				{
					if (score % 10 >= 8)
						level += "+";
				}
				else
				{
					level += "-";
				}
			}
		}
		cout << level << endl;
		if (score == -1)
		{
			break;
		}
	}
	cout << "end" << endl;

	return 0;
}
