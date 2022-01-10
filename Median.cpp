#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> numsMerged{nums1};
	    move(nums2.begin(), nums2.end(), back_inserter(numsMerged));
	    sort(numsMerged.begin(), numsMerged.end());
        if (numsMerged.size() % 2 == 0)
        {
            double j = numsMerged[numsMerged.size() / 2];
            double k = numsMerged[(numsMerged.size() / 2) - 1];
            double result = (j + k) / 2;
            return  result;
        }
        else
        {
            return numsMerged[numsMerged.size() / 2];;
        }
    }
};
