#include <cctype>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) 
    {
        if (s.size() >= 1 && s.size() <= 100)
        {
            for (int i = 0; i < s.size(); i++)
            {
                s[i] = tolower(s[i]);
            }
        }
        return s;
    }
};
