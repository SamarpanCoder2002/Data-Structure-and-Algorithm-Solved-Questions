// Complete the circularArrayRotation function below.
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int>store;
    if(k>a.size())
        k = k%(a.size());
    int temp;
    while(k){
        temp=a[a.size()-1];
        a.pop_back();
        a.insert(a.begin(),temp);
        k--;
    }
    for(int i=0;i<queries.size();i++){
        store.push_back(a[queries[i]]);
    }
    a.clear();
    return store;
}
