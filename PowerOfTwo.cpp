class Solution {
public:
    bool isPowerOfTwo(int n) {
	int k = 0;
	while (pow(2, k) <= n)
	{
		if (pow(2, k) == n)
		{
			return true;
		}
		k++;
	}
	return false;
    }
};
