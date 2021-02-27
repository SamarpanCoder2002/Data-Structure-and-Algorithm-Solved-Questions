class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> store;
        vector<int>:: iterator it = nums.begin();
        map<int,int>:: iterator it2;
        vector<int> returnIt;

        while(it!=nums.end()){
            it2 = store.find(target-(*it));
            if(it2 != store.end()){
                returnIt.push_back(it2->second);
                returnIt.push_back(it-nums.begin());
                break;
            }
            store[nums[it-nums.begin()]] = it-nums.begin();
            it++;
        }

        return returnIt;
    }
};
