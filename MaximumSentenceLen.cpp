
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
	vector<int> nums;
	for (int i = 0; i < sentences.size(); i++)
	{
		int n = 0;
		stringstream ss(sentences[i]);
		string word;
		while (ss >> word)
		{
			n++;
		}
		nums.push_back(n);
	}
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] >= nums[0])
		{
			nums[0] = nums[i];
		}
	}
	return nums[0];    
    }
};
