#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> nums1 = {4, 9, 5};
	vector<int> nums2 = {9, 4, 6, 3};
	vector<int> output;
	if (nums1.size() >= 1 && nums2.size() >= 1 && nums1.size() <= 1000 && nums2.size() <= 1000)
	{
		for (int i = 0; i < nums1.size(); i++)
		{
			for (int j = 0; j < nums2.size(); j++)
			{
				if (nums1[i] == nums2[j])
				{
					output.push_back(nums1[i]);
				}
			}
		}
		sort(output.begin(), output.end());
		output.erase(unique(output.begin(), output.end()), output.end());
		return 0;
	}
}
