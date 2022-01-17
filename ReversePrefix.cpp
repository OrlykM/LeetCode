#include <vector>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        if (word.size() >= 1 && word.size() <=250)
        {
            int p = 0;
            for (int i = 0; i < word.size(); i++)
            {
                if (word[i] == ch)
                {
                    p++;
                    break;
                }
                p++;

                if (i == word.size() - 1 && word[i] != ch)
                {
                    p = 0;
                    break;
                }
            }

            for (int i = 0; i < p/2; i++)
            {
                char temp = word[i];
                word[i] = word[p - 1 - i];
                word[p - 1 - i] = temp;
            }
        }
        return word;
    }
};
