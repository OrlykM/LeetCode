#include <vector>
using namespace std;
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {      	
        vector<int> output;
        if (nums.size() >= 2 && nums.size() <= 100 && nums.size() % 2 == 0)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (i != nums.size() - 1)
                {
                    if (nums[i] >= 1 && nums[i] <= 100)
                    {
                        for (int j = 0; j < nums[i]; j++)
                        {
                            output.push_back(nums[i + 1]);
                        }
                        i++;
                    }
                }
            }
	    }
        return output;
    }
};
