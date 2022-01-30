#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> output;
	vector<vector<int>> pascalTring;
	int n;
	cin >> n;
	if (n >= 0 && n <= 33)
	{
		if (n == 0)
		{
			output.push_back(1);
			return 0;
		}
		else
		{
			for (int i = 0; i < n+1; i++)
			{
				vector<int> row;
				if (i == 0)
				{
					row.push_back(1);
					pascalTring.push_back(row);
				}
				else if ( i == 1)
				{
					row.push_back(1);
					row.push_back(1);
					pascalTring.push_back(row);
				}
				else
				{
					for (int j = 0; j < i+1; j++)
					{
						if (j == 0 || j == i)
						{
							row.push_back(1);
						}
						else
						{
							int curr = pascalTring[i - 1][j];
							int prev = pascalTring[i - 1][j - 1];
							row.push_back(prev + curr);
						}

						if (j == i) 
						{
							pascalTring.push_back(row);
						}
					}					
				}
			}
			output = pascalTring[pascalTring.size() - 1];
		}
	}
}
