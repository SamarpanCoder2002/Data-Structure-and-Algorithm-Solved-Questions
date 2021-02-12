class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> store;
        vector<int> temp, temp1;
        for(int i=0; i<numRows; i++){
            for(int j=0; j<=i; j++){
                if(j==0 or j==i)
                    temp.push_back(1);
                else{
                    temp1 = store[store.size()-1];
                    temp.push_back(temp1[j]+temp1[j-1]);
                }
            }
            store.push_back(temp);
            temp.clear();
            temp1.clear();
        }
        return store;
    }
};
