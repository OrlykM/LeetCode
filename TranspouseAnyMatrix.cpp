#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<vector<int>> matrix = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	vector<vector<int>> nums;
	if (matrix.size() >= 1 && matrix.size() <= 1000)
	{
		if (matrix.size() == matrix[0].size())
		{
			for (int i = 0; i < matrix.size(); i++)
			{
				vector<int> num;
				for (int j = 0; j < matrix[i].size(); j++)
				{
					num.push_back(matrix[j][i]);
				}
				nums.push_back(num);
			}
		}
		else
		{
			int k = matrix[0].size();
			for (int i = 0; i < k; i++)
			{
				vector<int> num;
				for (int j = 0; j < matrix.size(); j++)
				{
					num.push_back(matrix[j][i]);
				}
				nums.push_back(num);
			}
			for (int i = 0; i < nums.size(); i++)
			{
				for (int j = 0; j < nums[i].size(); j++)
				{
					cout << nums[i][j] << " ";
				}
				cout << endl;
			}
		}
	}
	return EXIT_SUCCESS;
}
