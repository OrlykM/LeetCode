#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int output;
        if (n >= 1 && n <= 100000)
        {
            string str = to_string(n);
            int sum = 0, multp = 1;
            for (int i = 0; i < str.size(); i++)
            {
                sum += str[i] - '0';
                multp *= str[i] - '0';
            }
            output = multp - sum;
        }	
        return output;
    }
};
