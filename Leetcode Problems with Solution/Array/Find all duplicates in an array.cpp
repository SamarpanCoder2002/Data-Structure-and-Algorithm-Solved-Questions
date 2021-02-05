class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return nums;
        vector<int> store;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1])
                store.push_back(nums[i]);
        }
        sort(store.begin(),store.end());
        return store;
    }
};
