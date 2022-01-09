#include <vector>
#include <sstream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string k) {
        vector<string> words;
        string word;
        int p = 0;
        stringstream ss(k);
        while (ss >> word)
        {
            words.push_back(word);
        }
        for (int i = 0; i < words[words.size() - 1].size(); i++)
        {
            p++;
        }
        return p;
    }
};
