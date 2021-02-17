// Complete the plusMinus function below.
/*
Print the following  lines, each to  decimals:

proportion of positive values
proportion of negative values
proportion of zeros
*/
void plusMinus(vector<int> arr) {
    double count_positive=0.0,count_negative=0.0,count_zero=0.0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0)
            count_positive+=1.0;
        else if(arr[i]<0)
            count_negative+=1.0;
        else
            count_zero+=1.0;
    }
    cout<<count_positive/double(arr.size())<<endl;
    cout<<count_negative/double(arr.size())<<endl;
    cout<<count_zero/double(arr.size());
}
