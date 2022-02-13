#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) 
    {
        if (s.size() >= 1)
        {
            vector<char> vowels;
            vector<int> positions;
            for (int i = 0; i < s.size(); i++)
            {
                if ((int)s[i] == 97 || (int)s[i] == 101 || (int)s[i] == 105 || (int)s[i] == 111 || (int)s[i] == 117)
                {
                    vowels.push_back(s[i]);
                    positions.push_back(i);
                }
                else if ((int)s[i] == 65 || (int)s[i] == 69 || (int)s[i] == 73 || (int)s[i] == 79 || (int)s[i] == 85) 
			    {
				    vowels.push_back(s[i]);
				    positions.push_back(i);
			    }
            }
            for (int i = 0; i < vowels.size()/2; i++)
            {
                char temp = vowels[i];
                vowels[i] = vowels[vowels.size() - 1 - i];
                vowels[vowels.size() - 1 - i] = temp;
            }
            for (int i = 0; i < positions.size(); i++)
            {
                s[positions[i]] = vowels[i];
            }
        }     
        return s;
    }
};
