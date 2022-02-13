class Solution {
public:
    int BinarySearch(vector<int> nums, int target) 
    {
        int index = -1;
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = (right + left) / 2;
            if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else if(nums[mid] == target)
            {
                return mid;
            }
        }
        return index;
    }   
    int search(vector<int>& nums, int target) 
    {
        int index = -1;
        if (nums.size() >= 1 && nums.size() <= 10000)
        {
            index = BinarySearch(nums, target);
        }
        return index;
    }
};
