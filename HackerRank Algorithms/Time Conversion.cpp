/*
Sample Input

07:05:45PM

Sample Output

19:05:45

*/


//Complete the timeConversion function below.

string timeConversion(string s) 
{
    string hr = s.substr(0,2);
    int t = stoi(hr);
    string ans="";
    if(s[8]=='P')
    {
        if(t!=12)
            ans+=to_string(t+12)+s.substr(2,6);
        else
            ans=s.substr(0,8);
    }
    else 
    {
        if(t!=12)
            ans=s.substr(0,8);
        else
            ans="00"+s.substr(2,6);
    }
    return ans;
}
