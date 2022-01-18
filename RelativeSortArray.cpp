#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> arr1 = { 28,6,22,8,44,17 };
	vector<int> arr2 = { 22,28,8,6 };
	if (arr1.size() >= 1 && arr2.size() >= 1 && arr1.size() <= 1000 && arr2.size() <= 1000)
	{
		vector<int> subarray;
		vector<int> secondSubarray;
		for (int i = 0; i < arr1.size(); i++)
		{
			for (int j = 0; j < arr2.size(); j++)
			{
				if (arr1[i] == arr2[j])
				{
					subarray.push_back(arr1[i]);
					break;
				}
				if (j == arr2.size() - 1)
				{
					secondSubarray.push_back(arr1[i]);
				}
			}
		}
		arr1.clear();
		sort(secondSubarray.begin(), secondSubarray.end());
		for (int i = 0; i < arr2.size(); i++)
		{
			for (int k = 0; k < subarray.size(); k++)
			{
				if (subarray[k] == arr2[i])
				{
					arr1.push_back(subarray[k]);
				}
			}
		}
		for (int i = 0; i < secondSubarray.size(); i++)
		{
			arr1.push_back(secondSubarray[i]);
		}
		subarray.clear(); secondSubarray.clear();
		return 0;
	}
}
