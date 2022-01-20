#include <vector>
#include <sstream>
using namespace std;
class Solution {
public:
    string reverseWords(string s) 
    {
        if (s.size() >= 1 && s.size() <= 10000)
        {
            vector<string> words;
            string word;
            stringstream ss(s);
            while (ss >> word)
            {
                words.push_back(word);
            }
            for (int i = 0; i < words.size()/2; i++)
            {
                string temp = words[i];
                words[i] = words[words.size() - 1 - i];
                words[words.size() - 1 - i] = temp;
            }
            s.clear();
            for (int i = 0; i < words.size(); i++)
            {
                if (i != words.size() - 1)
                {
                    s += words[i] + " ";
                }
                else
                {
                    s += words[i];
                }
            }
        }
        return s;    
    }
};
