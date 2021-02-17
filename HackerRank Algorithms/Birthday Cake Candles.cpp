/*
Sample Input 0

4
3 2 1 3
Sample Output 0

2
*/
int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(),candles.end());
    int _count=1;
    for(int i=candles.size()-2; i>=0; i--){
        if(candles[i]==candles[candles.size()-1])
            _count++;
    }
    return _count;
}
