/*
Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(),nums.end());
        vector<int>:: iterator it;
        while(1){
            it = lower_bound(nums.begin(),nums.end(),val);
            if(it==nums.end() || (*it) != val)
                return nums.size();
            nums.erase(it);
        }
    }
};
