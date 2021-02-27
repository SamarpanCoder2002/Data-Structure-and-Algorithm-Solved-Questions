class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>:: iterator it = nums.begin();
        while(it != nums.end()){
            if((*it) >= target)
                return(it-nums.begin());
            it++;
        }
        return nums.size();
    }
};
