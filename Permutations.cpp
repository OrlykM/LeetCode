#include <vector>
using namespace std;
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        vector<int> output;
        if (nums.size() >= 1 && nums.size() <= 1000)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] >= 0 && nums[i] <= nums.size())
                {
                    output.push_back(nums[nums[i]]);
                }
            }    
        }	
        return output;
    }
};
