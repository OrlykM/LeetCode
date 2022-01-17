#include <vector>
using namespace std;
class Solution {
public:
    int xorOperation(int n, int start) 
    {
        vector<int> nums;
        int output = 0;
        if (n >= 1 && n <= 1000 && start >= 0 && start <= 1000)
        {
            for (int i = 0; i < n; i++)
            {
                nums.push_back(start + 2 * i);
            }
            for (int i = 0; i < nums.size(); i++)
            {
                output ^= nums[i];
            }
        }
        return output;
    }
};
