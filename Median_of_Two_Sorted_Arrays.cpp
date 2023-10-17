9.Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).

Example:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

solution:

class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
   vector<int> result(v1.size() + v2.size());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());

    int divide;
    if (result.size() % 2 == 0) {
        divide = result.size() / 2;
        double r = (result[divide] + result[divide - 1]) / 2.0;
        return r;
    } else {
        return result[result.size() / 2];
    }
    }
};
