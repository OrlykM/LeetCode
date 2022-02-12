#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool rotateString(string str, string goal) 
    {
        bool isGoal = false;
        if (str.size() >= 1 && goal.size() >= 1 && str.size() <= 100 && goal.size() <= 100)
        {
            if (str == goal)
            {
                isGoal = true;
            }
            else
            {
                int size = 0;
                while (size != str.size())
                {
                    str += str[0];
                    str.erase(str.begin());
                    if (str == goal)
                    {
                        isGoal = true;
                        break;
                    }
                    size++;
                }

            }	
        }
        return isGoal;
    }
};
