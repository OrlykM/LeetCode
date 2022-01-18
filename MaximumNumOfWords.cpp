#include <sstream>
#include <vector>
using namespace std;
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) 
    {
        int output = 0;
        if (text.size() >= 1 && text.size() <= 10000 && brokenLetters.size() >= 0 && brokenLetters.size() <= 26)
        {
            string word;
            stringstream ss(text);
            while (ss >> word)
            {
                bool toDestroy = false;
                for (int i = 0; i < word.size(); i++)
                {
                    for (int j = 0; j < brokenLetters.size(); j++)
                    {
                        if (word[i] == brokenLetters[j])
                        {
                            toDestroy = true;
                            break;
                        }
                    }
                    if (toDestroy == true)
                    {
                        break;
                    }
                    if (i == word.size() - 1)
                    {
                        output++;
                    }
                }
            }
        }
        return output;
    }
};
