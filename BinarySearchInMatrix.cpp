#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    bool BinarySearch(vector<int> nums, int target) 
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else if (nums[mid] == target) 
            {
                return true;
            }
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        bool isInMatrix = false;
        if (matrix.size() >= 1 && matrix.size() <= 200 && matrix[0].size() >= 1 && matrix[0].size() <= 200)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                bool inThisRow = BinarySearch(matrix[i], target);
                if (inThisRow == true)
                {
                    isInMatrix = true;
                    break;
                }
            }
        }
        return isInMatrix;
    }
};
