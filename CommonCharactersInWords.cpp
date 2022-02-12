#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<string> commonChars;
        if (words.size() >= 1 && words.size() <= 100)
        {
            for (int i = 0; i < words[0].size(); i++)
            {
                int WordsRepeatChar = 0;
                for (int j = 1; j < words.size(); j++)
                {
                    for (int k = 0; k < words[j].size(); k++)
                    {
                        if (words[0][i] == words[j][k])
                        {
                            words[j].erase(words[j].begin() + k);
                            WordsRepeatChar++;
                            break;
                        }
                    }
                    if (j == words.size() - 1 && WordsRepeatChar == words.size()-1)
                    {
                        string CommonChar(1, words[0][i]);
                        commonChars.push_back(CommonChar);
                    }
                }
            }         
        }
        return commonChars;
    }
};
