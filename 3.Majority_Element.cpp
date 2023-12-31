2.Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,majority=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==majority){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                majority=nums[i];
                count=1;
            }
        }
        return majority;
    }
};

