#include <vector>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> x, y;
        int p = 0;
        int k = 0;
        vector<int> output;
        if (n >= 1 && n <= 500 && nums.size() == 2*n)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] >= 1 && nums[i] <= 1000)
                {
                    if (i < n)
                    {
                        x.push_back(nums[i]);
                    }
                    else
                    {
                        y.push_back(nums[i]);
                    }
                }
            }
            for (int i = 0; i < nums.size(); i++)
            {
                if (i % 2 == 0)
                {
                    output.push_back(x[p]);
                    p++;
                }
                else
                {
                    output.push_back(y[k]);
                    k++;
                }
            }
        }
        return output;  
    }
};
