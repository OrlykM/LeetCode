#include <vector>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> output;
        if (candies.size() >= 2 && candies.size() <= 100 && extraCandies >= 1 && extraCandies <= 50)
        {
            for (int i = 0; i < candies.size(); i++)
            {
                if (candies[i] >= 1 && candies[i] <= 100)
                {
                    int k = candies[i] + extraCandies;
                    for (int j = 0; j < candies.size(); j++)
                    {
                        if (candies[j] > k)
                        {
                            output.push_back(false);
                            break;
                        }
                        if (j == candies.size() - 1)
                        {
                            output.push_back(true);
                            break;
                        }	
                    }
                }
            }        
	    }
        return output;
    }
};
