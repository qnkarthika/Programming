You are given a 0-indexed integer array nums having length n, an integer indexDifference, and an integer valueDifference.
Your task is to find two indices i and j, both in the range [0, n - 1], that satisfy the following conditions:
abs(i - j) >= indexDifference, and
abs(nums[i] - nums[j]) >= valueDifference
Return an integer array answer, where answer = [i, j] if there are two such indices, and answer = [-1, -1] otherwise. If there are multiple choices for the two indices, return any of them.
Note: i and j may be equal.

Program:

#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<int> findIndices(const std::vector<int>& nums, int indexDifference, int valueDifference) {
        std::vector<int> result;
        int count=0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + indexDifference; j < nums.size(); ++j) {
                if (std::abs(nums[i] - nums[j]) >= valueDifference) {
                    result.push_back(i);
                    result.push_back(j);
                    count=1;
                }
            }
        }
if(count==1){
        return result;}
else{
    result.push_back(-1);
    result.push_back(-1);
    return result;
}
    }
};
