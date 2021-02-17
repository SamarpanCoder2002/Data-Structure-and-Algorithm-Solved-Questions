class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size())
            k=k%(nums.size());
        int temp;
        while(k){
            temp = nums[nums.size()-1];
            nums.pop_back();
            nums.insert(nums.begin(),temp);
            k--;
        }
    }
};
