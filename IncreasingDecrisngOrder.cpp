#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> nums = { 4,1,2,3 };
	if (nums.size() >= 1 && nums.size() <= 100)
	{
		vector<int> IncresingOrder, DecrisngOrder;
		for (int i = 0; i < nums.size(); i++)
		{
			if (i % 2 == 0)
			{
				IncresingOrder.push_back(nums[i]);
			}
			else
			{
				DecrisngOrder.push_back(nums[i]);
			}
		}
		sort(IncresingOrder.begin(), IncresingOrder.end());
		sort(DecrisngOrder.begin(), DecrisngOrder.end());
		for (int i = 0; i < DecrisngOrder.size()/2; i++)
		{
			int temp = DecrisngOrder[i];
			DecrisngOrder[i] = DecrisngOrder[DecrisngOrder.size() - 1 - i];
			DecrisngOrder[DecrisngOrder.size() - 1 - i] = temp;
		}
		int l = 0, r = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (i % 2 == 0)
			{
				nums[i] = IncresingOrder[l];
				l++;
			}
			else
			{
				nums[i] = DecrisngOrder[r];
				r++;
			}
		}
	}
	return 0;
}
