class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum=0, maxSum=-100000;
        for(int i=0;i<nums.size();i++){
            curSum += nums[i];
            if(curSum>maxSum)
                maxSum=curSum;
            if(curSum<0)
                curSum=0;

        }
        return maxSum;
    }
};
