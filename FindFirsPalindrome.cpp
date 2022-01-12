#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<string> words = { "def" };
	string firsPalindrome = "";
	if (words.size() >= 1 && words.size() <= 100)
	{
		for (int i = 0; i < words.size(); i++)
		{
			string word = "";
			for (int j = 0; j < words[i].size(); j++)
			{
				if (words[i][j] == words[i][words[i].size() - 1 - j])
				{
					word += words[i][j];
				}
			}
			if (word == words[i])
			{
				firsPalindrome = word;
				break;
			}
		}
		cout << firsPalindrome;
		return 0;
	}
}
