/*
Sample Input

6
1 2 3 4 10 11

Sample Output

31

*/

//Complete the simpleArraySum function below.
 
int simpleArraySum(vector<int> ar) 
{
    int sum=0;
    for(int i=0;i<ar.size();i++)
        sum+=ar[i];
    return sum;
}



//using C++ Standard Template Library (STL)

int aVeryBigSum(vector<int> ar) 
{
    int sum=accumulate(ar.begin(),ar.end(),0);
    return sum;
}
