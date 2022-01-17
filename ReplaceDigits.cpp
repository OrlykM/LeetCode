using namespace std;
class Solution {
public:
    string replaceDigits(string s) 
    {
        if (s.size() >= 1 && s.size() <= 100)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (isdigit(s[i]))
                {
                    int f = (int)s[i - 1];
                    f += s[i] - '0';
                    s[i] = (char)f;
                }
            }
        }
        return s;
    }
};
