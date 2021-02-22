class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0]>0)
            return 0;
        vector<int>:: iterator it = nums.begin();
        while(it+1 != nums.end()){
            if(*(it)+1 != *(it+1))
                return *(it)+1;
            it++;
        }
        return *(it)+1;
    }
};
