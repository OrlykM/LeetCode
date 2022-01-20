#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<string> words1 = { "a","v" };
	vector<string> words2 = { "a","v","z","ab" };
	int output = 0;
	if (words1.size() >= 1 && words2.size() >= 1 && words1.size() <= 1000 && words2.size() <= 1000)
	{
		vector<string> UniqueWords1;
		vector<string> UniqueWords2;
		for (int i = 0; i < words1.size(); i++)
		{
			int repeats = 1;
			for (int j = 0; j < words1.size(); j++)
			{
				if (j != i)
				{
					if (words1[i] == words1[j])
					{
						repeats++;
					}

				}
			}
			if (repeats == 1)
			{
				UniqueWords1.push_back(words1[i]);
			}
		}
		for (int i = 0; i < words2.size(); i++)
		{
			int repeats = 1;
			for (int j = 0; j < words2.size(); j++)
			{
				if (j != i)
				{
					if (words2[i] == words2[j])
					{
						repeats++;
					}

				}
			}
			if (repeats == 1)
			{
				UniqueWords2.push_back(words2[i]);
			}
		}
		for (int i = 0; i < UniqueWords1.size(); i++)
		{
			for (int j = 0; j < UniqueWords2.size(); j++)
			{
				if (UniqueWords1[i] == UniqueWords2[j])
				{
					output++;
				}
			}
		}
	}
	cout << output;
	return 0;
}
