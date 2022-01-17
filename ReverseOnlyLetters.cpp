#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s = "a-bC-dEf-ghIj";
	vector<int> pos;
	string flex = "";
	if (s.size() >= 1 && s.size() <= 100)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (isalpha(s[i]))
			{
				flex += s[i];
				pos.push_back(i);
			}
		}
		for (int i = 0; i < flex.size()/2; i++)
		{
			char temp = flex[i];
			flex[i] = flex[flex.size() - 1 - i];
			flex[flex.size() - 1 - i] = temp;
		}
		for (int i = 0; i < pos.size(); i++)
		{
			s[pos[i]] = flex[i];
		}
		cout << s;
	}
	return 0;
}
