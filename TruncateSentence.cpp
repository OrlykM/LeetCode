#include <sstream>
#include <vector>
using namespace std;
class Solution {
public:
    string truncateSentence(string s, int k) 
    {
        string output = "";
        if (s.size() >= 1 && s.size() <= 500)
        {
            vector<string> words;
            string word;
            stringstream ss(s);
            while (ss >> word)
            {
                words.push_back(word);
            }

            if (k < words.size())
            {
                words.erase(words.begin() + k, words.end());
            }
            for (int i = 0; i < words.size(); i++)
            {
                if (i != words.size() - 1)
                {
                    output += words[i] + " ";
                }
                else
                {
                    output += words[i];
                }
            }
        }
        return output;
    }
};
