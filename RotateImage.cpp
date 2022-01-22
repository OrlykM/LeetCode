#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        vector<vector<int>> output;
        if (matrix.size() >= 1)
        {
            for (int i = 0; i < matrix.size()/2; i++)
            {
                vector<int> temp = matrix[i];
                matrix[i] = matrix[matrix.size() - 1 - i];
                matrix[matrix.size() - 1 - i] = temp;
            }
            for (int i = 0; i < matrix.size(); i++)
            {
                vector<int> nums;
                for (int j = 0; j < matrix[i].size(); j++)
                {
                    nums.push_back(matrix[j][i]);
                }
                output.push_back(nums);
            }
            matrix = output;
        }
    }
};
