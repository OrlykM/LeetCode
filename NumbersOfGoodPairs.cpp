#include <vector>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<vector<int>> output;
        if (nums.size() >= 1 && nums.size() <= 100)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] >= 1 && nums[i] <= 100)
                {
                    vector<int> pairs;
                    for (int j = i; j < nums.size(); j++)
                    {
                        if (i != j)
                        {
                            if (nums[i] == nums[j])
                            {
                                pairs.push_back(i);
                                pairs.push_back(j);
                                output.push_back(pairs);
                            }
                        }
                    }
                }
            }
        }    
        return output.size();
    }
};
