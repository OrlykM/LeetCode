class Solution {
public:
    string reverseWords(string s) 
    {
        string output = "";
        vector<string> str;
        if (s.size() >= 1  && s.size() <= 50000)
        {
            string word;
            stringstream ss(s);
            while (ss >> word)
            {
                str.push_back(word);
            }
            for (int i = 0; i < str.size(); i++)
            {
                for (int j = 0; j < str[i].size()/2; j++)
                {
                    char temp = str[i][j];
                    str[i][j] = str[i][str[i].size() - 1 - j];
                    str[i][str[i].size() - 1 - j] = temp;
                }
            }
            for (int i = 0; i < str.size(); i++)
            {
                if (i != str.size() - 1)
                {
                    output += str[i] + " ";
                }
                else
                {
                    output += str[i];
                }

            }
        }
        return output;
    }
};
