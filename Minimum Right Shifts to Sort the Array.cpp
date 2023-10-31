You are given a 0-indexed array nums of length n containing distinct positive integers. Return the minimum number of right shifts required to sort nums and -1 if this is not possible.

Program:


#include<algorithm>
class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        vector<int> result=nums;
        sort(result.begin(),result.end());
        for(int i=0;i<nums.size();i++){
            if(equal(nums.begin(),nums.end(),result.begin())){
                return i;
            }
            rotate(nums.rbegin(),nums.rbegin()+1,nums.rend());
        }
        return -1;
        
    }
};
