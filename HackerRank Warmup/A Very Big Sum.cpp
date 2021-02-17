/*
Sample Input

5
1000000001 1000000002 1000000003 1000000004 1000000005

Sample Output

5000000015

*/

// Complete the aVeryBigSum function below.

long aVeryBigSum(vector<long> ar) 
{
    long sum=0;
    for(int i=0;i<ar.size();i++)
        sum+=ar[i];
    return sum;
}



//using C++ Standard Template Library (STL)

long aVeryBigSum(vector<long> ar) 
{
    long sum=accumulate(ar.begin(),ar.end(),0ll);
    return sum;
}
