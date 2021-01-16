/*
Sample Input

1 2 3 4 5
Sample Output

10 14
*/

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    long _count=0;
    for(int i=0;i<arr.size()-1;i++)
       _count+=arr[i];
    cout<<_count<<" "<<_count-arr[0]+arr[arr.size()-1];
}
