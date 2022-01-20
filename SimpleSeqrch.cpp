#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        // Simple Search algorithm
        vector<int> output;
        if (nums.size() >= 1 && nums.size() <= 100)
        {
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == target)
                {
                    output.push_back(i);
                }
            }
        }
        return output;
    }
};
