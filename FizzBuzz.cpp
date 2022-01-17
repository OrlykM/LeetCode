#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> output;
        if (n >= 1 && n <= 10000)
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % 3 == 0 && i % 5 == 0)
                {
                    output.push_back("FizzBuzz");
                }
                else if (i % 3 == 0) 
                {
                    output.push_back("Fizz");
                }
                else if (i % 5 == 0) 
                {
                    output.push_back("Buzz");
                }
                else
                {
                    string k = to_string(i);
                    output.push_back(k);
                }
            }         
	    }
        return output;
    }
};
