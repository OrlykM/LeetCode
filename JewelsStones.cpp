using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int k = 0;
        if (jewels.size() >= 1 && stones.size() >= 1 && jewels.size() <= 50 && stones.size() <= 50)
        {
            for (int i = 0; i < stones.size(); i++)
            {
                for (int j = 0; j < jewels.size(); j++)
                {
                    if (stones[i] == jewels[j])
                    {
                        k++;
                    }
                }
            }
        }
        return k;
    }
};
