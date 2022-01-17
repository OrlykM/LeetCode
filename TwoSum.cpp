#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> output;
        if (nums.size() >= 2 && nums.size() <= 10000)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i; j < nums.size(); j++)
                {
                    if (i != j)
                    {
                        if (nums[i] + nums[j] == target)
                        {
                            output.push_back(i);
                            output.push_back(j);
                            return output;
                        }
                    }
                }
            }
        }
        return output;
    }
};
