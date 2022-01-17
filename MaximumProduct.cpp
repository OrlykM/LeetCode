#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int k1=0, k2=0;
        if (nums.size() >= 2 && nums.size() <= 500)
        {
            sort(nums.begin(), nums.end());
            k1 = nums[nums.size() - 1] - 1;
            k2 = nums[nums.size() - 2] - 1;
        }
       
        return k1 * k2;
    }
};
