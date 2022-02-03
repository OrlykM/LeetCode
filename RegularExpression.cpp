#include <iostream>
#include <vector>
#include <regex>
using namespace std;
int main()
{
	bool output = false;
	string str1 = "aa";
	string str2 = "a.";
	if (str1.size() >= 1 && str2.size() >= 1 && str1.size() <= 30 && str2.size() <= 30)
	{
		regex pattern(str2);
		smatch match;
		if (regex_match(str1, match, pattern))
		{
			output = true;
		}
	}
	cout << output;
}
