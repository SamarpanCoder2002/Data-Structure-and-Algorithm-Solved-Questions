class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int>:: iterator it = nums.begin();
        int store = -1000;
        while(it != nums.end()){
            if((*it) != store){
                store = *it;
                it++;
            }
            else{
                nums.erase(it);
            }
        }
    return nums.size();
    }
};
