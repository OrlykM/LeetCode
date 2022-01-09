class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> output;	
        for (int i = 0; i < nums.size(); i++)
        {
            int k = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (j != i)
                {
                    if (nums[j] < nums[i])
                    {
                        k++;
                    }
                }
            }
            output.push_back(k);
        }
        return output;
    }
};
