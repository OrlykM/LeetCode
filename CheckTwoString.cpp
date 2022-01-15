#include <vector>
using namespace std;
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)     
    {
        bool output;
        if (word1.size() >= 1 && word2.size() >= 1 && word1.size() <= 1000 && word2.size() <= 1000)
        {
            string str1 = "", str2 = "";
            for (int i = 0; i < word1.size(); i++)
            {
                if (word1[i].size() >= 1 && word1[i].size() <= 1000)
                {
                    str1 += word1[i];
                }
            }
            for (int i = 0; i < word2.size(); i++)
            {
                if (word2[i].size() >= 1 && word2[i].size() <= 1000)
                {
                    str2 += word2[i];
                }
            }
            if (str1 == str2)
            {
                output = true;
            }
            else
            {
                output = false;
            }
        }
        return output;
    }
};
