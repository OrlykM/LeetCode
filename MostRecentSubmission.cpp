#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int secondHighest(string s) 
    {
        int output = -1;
        if (s.size() >= 1 && s.size() <= 500)
        {
            vector<int> nums;
            for (int i = 0; i < s.size(); i++)
            {
                if (isdigit(s[i]))
                {
                    nums.push_back(s[i] - '0');
                }
            }		
            nums.erase(unique(nums.begin(), nums.end()), nums.end());
            if (nums.size() > 1)
            {
                sort(nums.begin(), nums.end());
                nums.erase(unique(nums.begin(), nums.end()), nums.end());
                output = nums[nums.size() - 2];
            }

        }
        return output;
    }
};
