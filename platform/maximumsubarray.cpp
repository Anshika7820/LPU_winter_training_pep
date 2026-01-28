// https://leetcode.com/problems/maximum-subarray/?difficulty=EASY&page=1

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxsum=INT_MIN;
        for(int val:nums){
            cursum=cursum+val;
            maxsum=max(cursum,maxsum);
            if(cursum<0){
                cursum=0;
            }
        }
        return maxsum;
    }   
};