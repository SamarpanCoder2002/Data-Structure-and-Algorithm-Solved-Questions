class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        int choice1,choice2;
        int maxpdt = nums[0];
        int minpdt = nums[0];
        int ans = nums[0];
        for(int i=1; i<nums.size();i++){
            choice1 = minpdt*nums[i];
            choice2 = maxpdt*nums[i];
            maxpdt = max(nums[i],max(choice1,choice2));
            minpdt = min(nums[i],min(choice1,choice2));
            ans = max(ans,maxpdt);
        }
        return ans;

    }
};
